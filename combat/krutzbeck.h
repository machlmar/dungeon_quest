#ifndef KRUTZBECK_H
#define KRUTZBECK_H

#include "hero.h"

class Krutzbeck : public Hero
{
public:
	Krutzbeck() : Hero( "Krutzbeck", 9, 4, 5, 4, 20 ) {}

	void Attack( Hero& enemy );
};

#endif // KRUTZBECK_H
