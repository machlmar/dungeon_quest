#include "iostream"
#include "hero.h"
#include "dice.h"

using namespace std;

int naturalize( int number )
{
	return number > 0 ? number : 0;
}

void Hero::Attack( Hero& enemy )
{
	const int damage = m_combatStrength - enemy.m_combatDefence;
	enemy.Hit( damage > 0 ? damage : 0 );
}

int Hero::GetInitiative() const
{
	Roll();
	return k12();
}

void Hero::Roll() const
{
	m_combatStrength = naturalize( m_strength - k12() );
	m_combatAgility = naturalize( m_agility - k12() );
	m_combatDefence = naturalize( m_armour - k12() );
	m_combatMagic = naturalize( m_lore - k12() );
}

void Clash( Hero& hero1, Hero& hero2 )
{
	if ( hero1.GetInitiative() < hero2.GetInitiative() )
	{
		hero1.Attack( hero2 );
		if ( hero2.IsAlive() ) hero2.Attack( hero1 );
	}
	else
	{
		hero2.Attack( hero1 );
		if ( hero1.IsAlive() ) hero1.Attack( hero2 );
	}
}

void Combat( Hero& hero1, Hero& hero2, int fightsCount )
{
	int victoryH1 = 0;
	int victoryH2 = 0;
	for ( int i = 0; i < fightsCount; i++ )
	{
		hero1.Revive();
		hero2.Revive();

		while ( hero1.IsAlive() && hero2.IsAlive() )
		{
			Clash( hero1, hero2 );
		}

		if ( hero1.IsAlive() )
		{
			victoryH1++;
		}
		else
		{
			victoryH2++;
		}
	}

	cout.precision(3);
	cout << hero1.GetName() <<" won:" << victoryH1/( fightsCount / 100.0 ) << "% times, " << hero2.GetName() << " won:" << victoryH2/( fightsCount / 100.0 ) << "% times." << endl;
}

