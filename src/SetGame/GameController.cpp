#include "GameController.hpp"
#include "CardSet.h"

using namespace SetGame;

#define CHECK_SET_FIELD(set, FIELD) \
	(set.card0.FIELD() == set.card1.FIELD() && \
	 set.card0.FIELD() == set.card2.FIELD())

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

bool GameController::validateSet(const CardSet& set) const
{
	return
		CHECK_SET_FIELD(set, getNumber) ||
		CHECK_SET_FIELD(set, getSymbol) ||
		CHECK_SET_FIELD(set, getShading) ||
		CHECK_SET_FIELD(set, getColor);
}

void GameController::removeSetFromGame(const CardSet& set)
{
	m_gameBoard.removeCard(set.card0);
	m_gameBoard.removeCard(set.card1);
	m_gameBoard.removeCard(set.card2);
}

CardSet GameController::findSet(size_t pos0, size_t pos1, size_t pos2)
{
	return CardSet
	{
		m_gameBoard.getCard(pos0),
		m_gameBoard.getCard(pos1),
		m_gameBoard.getCard(pos2),
	};
}


