#pragma once

#include "SetCards/Card.hpp"
#include <vector>
#include <ostream>

namespace SetGame
{
	class GameBoard
	{
	public:
		size_t getNbOfCards() const;
		
		void removeCard(const SetCards::Card& card);
		const SetCards::Card& getCard(size_t index) const;
		void addCard(const SetCards::Card* newCard);
		
		friend std::ostream& operator << (std::ostream& o, const GameBoard& gb);
		
	private:
		std::vector<const SetCards::Card*> m_cards;
	};
}
