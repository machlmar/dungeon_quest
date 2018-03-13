#include "lindel.h"
#include "dice.h"

void Lindel::Roll() const
{
	Hero::Roll();

	// eternal glory
	if ( m_combatMagic >= 0 )
	{
		if ( m_combatStrength > 0 ) m_combatStrength *= 2;
		else if ( m_combatDefence > 0 ) m_combatDefence *=2;
		else if ( m_combatMagic > 0 ) m_combatMagic *= 2;

//		if ( m_combatDice > m_combatStrength ) m_combatStrength = m_combatDice;
//		else if ( m_combatDice > m_combatDefence ) m_combatDefence = m_combatDice;
//		else if ( m_combatDice > m_combatMagic ) m_combatMagic = m_combatDice - 1;
	}
}
