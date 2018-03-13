#include "tatiana.h"

void Tatiana::Attack( Hero& enemy )
{
	int attack = std::max( m_combatStrength, m_combatAgility );

	// focused shot
	if ( m_combatMagic >= 0 )
	{
		attack += 2;
	}

	enemy.Hit( naturalize( attack - enemy.GetMeeleRangedDefence() ) );
}
