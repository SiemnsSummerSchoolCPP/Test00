#pragma once

#include "SetCards/Card.hpp"
#include "SetCards/Deck.hpp"
#include "Dealer.hpp"
#include "Player.hpp"
#include "GameBoard.hpp"

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
		
		bool validateSet(const SetCards::Card* const* set) const;
		bool findSets(size_t pos1, size_t pos2, size_t pos3);
	};
}
