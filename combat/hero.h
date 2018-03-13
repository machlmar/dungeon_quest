#include "string"

#ifndef HERO_H
#define HERO_H

class Hero
{
	std::string m_name;
	int m_strength = 0;
	int m_agility = 0;
	int m_armour = 0;
	int m_lore = 0;
	int m_hp = 0;
	int m_maxHp = 0;

protected:
	mutable int m_combatStrength = 0;
	mutable int m_combatAgility = 0;
	mutable int m_combatDefence = 0;
	mutable int m_combatMagic = 0;

public:
	Hero( std::string name, int strength, int agility, int armour, int lore, int hp )
		: m_name( name ), m_strength( strength ), m_agility( agility ), m_armour( armour ), m_lore( lore ), m_hp( hp ), m_maxHp( hp ) {}
	virtual ~Hero() = default;

	std::string GetName() const { return m_name; }
	int GetLore() const { return m_lore; }
	int GetHp() const { return m_hp; }
	bool IsAlive() const { return m_hp > 0; }

	virtual int GetInitiative() const;

	virtual void Attack( Hero& enemy );
	void Hit( int hp ) { m_hp -= hp; }
	void Revive() { m_hp = m_maxHp; }

	virtual int GetMeeleAttack() const { return m_combatStrength; }
	virtual int GetRangedAttack() const { return m_combatAgility; }
	virtual int GetMagicAttack() const { return m_combatMagic; }

	virtual int GetMeeleRangedDefence() const { return m_combatDefence; }
	virtual int GetMagicDefence() const { return m_combatMagic; }

protected:
	virtual void Roll() const;
};

int naturalize( int );
void Clash( Hero&, Hero& );
void Combat( Hero&, Hero&, int );

#endif // HERO_H
