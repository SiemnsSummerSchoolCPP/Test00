#include "Deck.hpp"
#include <random>

using namespace SetCards;

Deck::Deck()
{
	m_cards = getAllCombinationsOfCards();
	shuffle();
	
	// A quick check, just to be sure.
	// assert(cardsAreUnique(m_cards));
}

/*
** Public methods
*/

void Deck::shuffle()
{
	std::random_device randomDevice;
	std::mt19937 merseneTwister(randomDevice());
	std::uniform_int_distribution<> uniformDistrib(0, Deck::totalNbOfCards - 1);
	
	for (int i = 0; i < Deck::totalNbOfCards; i++)
	{
		std::swap(m_cards[i], m_cards[uniformDistrib(merseneTwister)]);
	}
	m_cardIndex = 0;
}

const Card& Deck::dealACard()
{
	return *m_cards[m_cardIndex++];
}

/*
** Private static helpers.
*/

Deck::CardsContainer Deck::getAllCombinationsOfCards()
{
	Deck::CardsContainer cards;
	
	int i = 0;
	for (int nb = 0; nb < 3; nb++)
	{
		for (int symbol = 0; symbol < 3; symbol++)
		{
			for (int shading = 0; shading < 3; shading++)
			{
				for (int color = 0; color < 3; color++)
				{
					cards[i] = new Card(
					 	static_cast<Number>(nb),
						static_cast<Symbol>(symbol),
						static_cast<Shading>(shading),
						static_cast<Color>(color));
					i++;
				}
			}
		}
	}
	
	return cards;
}

bool Deck::cardsAreUnique(const CardsContainer& cards)
{
	for (int i = 0; i < totalNbOfCards - 1; i++)
	{
		for (int j = i + 1; j < totalNbOfCards; j++)
		{
			if (cards[i] == cards[j])
				return false;
		}
	}
	return true;
}

