#include "dice.h"
#include <random>

static std::random_device rd;
static std::mt19937 gen( rd() );
static std::uniform_int_distribution<> dis( 1, 12 );

int k12()
{
	return dis( gen );
}
