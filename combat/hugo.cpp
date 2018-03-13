#include "hugo.h"

void Hugo::Attack( Hero& enemy )
{
	int attack = m_combatStrength;

	// shield bash
	if ( m_combatStrength == 0  && m_combatDefence > 0 )
	{
		attack = m_combatDefence;
		m_combatDefence = 0;
	}

	enemy.Hit( naturalize( attack - enemy.GetMeeleRangedDefence() ) );
}
