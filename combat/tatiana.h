#ifndef TATIANA_H
#define TATIANA_H

#include "hero.h"

class Tatiana : public Hero
{
public:
	Tatiana() : Hero( "Tatiana", 4, 9, 4, 6, 14 ) {}

	void Attack( Hero& enemy );
};

#endif // TATIANA_H
