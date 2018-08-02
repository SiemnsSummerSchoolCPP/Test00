#pragma once

#include "SetCards/Deck.hpp"
#include "GameBoard.hpp"

namespace SetGame
{
	class Dealer
	{
	public:
		int dealCards(SetCards::Deck& deck, GameBoard& gameBoard) const;
		
	private:
		static const size_t requiredNbOfCardsOnBoard = 12;
	};
}
