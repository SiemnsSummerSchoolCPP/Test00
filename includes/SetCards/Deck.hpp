#pragma once

#include "Card.hpp"
#include <array>

namespace SetCards
{
	class Deck
	{
	public:
		struct NoCardsAvailable;
	
		Deck();
		
		void shuffle();
		const Card& dealACard();
	
	private:
		static const int totalNbOfCards = 81;
		using CardsContainer = std::array<Card*, totalNbOfCards>;
		
		CardsContainer m_cards;
		int m_cardIndex = 0;
		
		// Static helpers.
		static CardsContainer getAllCombinationsOfCards();
		static bool cardsAreUnique(const CardsContainer& cards);
	};
	
	struct Deck::NoCardsAvailable : public std::exception
	{
		const char* what() const throw();
	};
}
