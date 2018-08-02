#pragma once

#include "SetCards/Card.hpp"
#include "SetCards/Deck.hpp"
#include "Dealer.hpp"
#include "Player.hpp"
#include "GameBoard.hpp"
#include "CardSet.h"

namespace SetGame
{
	class GameController
	{
	public:
		GameController(size_t nbOfPlayers);
		
	private:
		size_t m_nbOfPlayers;
		Player** m_players;
		GameBoard m_gameBoard;
		Dealer m_dealer;
		
		bool validateSet(const CardSet& set) const;
		void removeSetFromGame(const CardSet& set);
		CardSet findSet(size_t pos0, size_t pos1, size_t pos2);
	};
}
