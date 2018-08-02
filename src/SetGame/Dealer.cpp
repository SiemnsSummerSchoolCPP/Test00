#include "Dealer.hpp"

using namespace SetGame;

int Dealer::dealCards(SetCards::Deck& deck, GameBoard& gameBoard) const
{
	try
	{
		while (gameBoard.getNbOfCards() < requiredNbOfCardsOnBoard)
		{
			gameBoard.addCard(&deck.dealACard());
		}
	}
	catch (const SetCards::Deck::NoCardsAvailable& e)
	{
		return -1;
	}
	
	return 0;
}
