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
** Getters
*/

Number Card::getNumber() const
{
	return m_number;
}

Symbol Card::getSymbol() const
{
	return m_symbol;
}

Shading Card::getShading() const
{
	return m_shading;
}

Color Card::getColor() const
{
	return m_color;
}

/*
** Operators
*/

std::ostream& SetCards::operator << (std::ostream& o, const Card& target)
{
	o
		<< "Nb: " << static_cast<int>(target.m_number) << " "
		<< "Sy: " << static_cast<int>(target.m_symbol) << " "
		<< "Sh: " << static_cast<int>(target.m_shading) << " "
		<< "Cl: " << static_cast<int>(target.m_color);
	
	return o;
}

bool SetCards::operator == (const Card& card1, const Card& card2)
{
	return
		card1.m_number == card2.m_number &&
		card1.m_symbol == card2.m_symbol &&
		card1.m_shading == card2.m_shading &&
		card1.m_color == card2.m_color;
}

Card& Card::operator = (const Card& other)
{
	m_number = other.m_number;
	m_symbol = other.m_symbol;
	m_shading = other.m_shading;
	m_color = other.m_color;
	return *this;
}
