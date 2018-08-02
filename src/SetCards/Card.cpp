#include "Card.hpp"

using namespace SetCards;

Card::Card(
	const Number number,
	const Symbol symbol,
	const Shading shading,
	const Color color) :
	m_number(number),
	m_symbol(symbol),
	m_shading(shading),
	m_color(color)
{
}

/*
** Operators
*/

std::ostream& SetCards::operator << (std::ostream& o, const Card& target)
{
	o
		<< "Nb: " << target.m_number << " "
		<< "Sy: " << target.m_symbol << " "
		<< "Sh: " << target.m_shading << " "
		<< "Cl: " << target.m_color;
	
	return o;
}

Card& Card::operator = (const Card& other)
{
	m_number = other.m_number;
	m_symbol = other.m_symbol;
	m_shading = other.m_shading;
	m_color = other.m_color;
	return *this;
}
