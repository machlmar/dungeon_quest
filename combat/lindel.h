#ifndef LINDEL_H
#define LINDEL_H

#include "hero.h"

class Lindel : public Hero
{
public:
	Lindel() : Hero( "Lindel", 6, 6, 6, 5, 15 ) {}

protected:
	void Roll() const;
};

#endif // LINDEL_H
