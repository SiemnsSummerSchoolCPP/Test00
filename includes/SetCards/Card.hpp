#pragma once

#include "CardPropertiesType.h"
#include <ostream>

namespace SetCards
{
	class Card
	{
	public:
		Card(Number number, Symbol symbol, Shading shading, Color color);
		
		// Operators
		friend std::ostream& operator << (std::ostream& o, const Card& target);
		Card& operator = (const Card& other);
		
	private:
		Number m_number;
		Symbol m_symbol;
		Shading m_shading;
		Color m_color;
	};
}
