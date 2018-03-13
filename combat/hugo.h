#ifndef HUGO_H
#define HUGO_H

#include "hero.h"

class Hugo : public Hero
{
public:
	Hugo() : Hero( "Hugo", 7, 4, 9, 3, 16 ) {}

	void Attack( Hero& enemy );
};

#endif // HUGO_H
