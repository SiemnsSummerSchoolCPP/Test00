#include "GameBoard.hpp"
#include <iostream>

using namespace SetGame;

size_t GameBoard::getNbOfCards() const
{
	return m_cards.size();
}

const SetCards::Card& GameBoard::getCard(size_t index) const
{
	if (index >= m_cards.size())
	{
		throw "Not a valid index."; // ToDo: make an exception.
	}
	return *m_cards[index];
}

void GameBoard::addCard(const SetCards::Card* const newCard)
{
	m_cards.push_back(newCard);
}

std::ostream& SetGame::operator << (std::ostream& o, const GameBoard& gb)
{
	for (const auto& card : gb.m_cards)
	{
		std::cout << card << std::endl;
	}
	return o;
}
