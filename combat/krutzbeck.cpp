#include "krutzbeck.h"

void Krutzbeck::Attack( Hero& enemy )
{
	int attack = m_combatStrength;

	// berseker
	if ( m_combatDefence > 0 )
	{
		attack = m_combatStrength + m_combatDefence;
		m_combatDefence = 0;
	}

	enemy.Hit( naturalize( attack - enemy.GetMeeleRangedDefence() ) );
}
