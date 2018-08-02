#include "GameController.hpp"

using namespace SetGame;

#define CHECK_SET_FIELD(SET, FIELD) \
	(SET[0]->FIELD() == SET[1]->FIELD() && \
	 SET[0]->FIELD() == SET[2]->FIELD())

GameController::GameController(const size_t nbOfPlayers)
{
	m_nbOfPlayers = nbOfPlayers;
	m_players = new Player*[m_nbOfPlayers];
	for (size_t i = 0; i < m_nbOfPlayers; i++)
	{
		m_players[i] = new Player();
	}
}

/*
** Private members
*/

bool GameController::validateSet(const SetCards::Card* const* const set) const
{
	return
		CHECK_SET_FIELD(set, getNumber) ||
		CHECK_SET_FIELD(set, getSymbol) ||
		CHECK_SET_FIELD(set, getShading) ||
		CHECK_SET_FIELD(set, getColor);
	
}

bool GameController::findSets(size_t pos1, size_t pos2, size_t pos3)
{
	throw;
}


