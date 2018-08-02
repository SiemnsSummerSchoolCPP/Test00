#pragma once

#include "SetCards/Card.hpp"

namespace SetGame
{
	// transform it into an array.
	struct CardSet
	{
		const SetCards::Card& card0;
		const SetCards::Card& card1;
		const SetCards::Card& card2;
	};
}
