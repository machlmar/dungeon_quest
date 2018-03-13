#include <iostream>

#include "hugo.h"
#include "krutzbeck.h"
#include "lindel.h"
#include "tatiana.h"

using namespace std;

int main()
{
//	Hero hugo( "Hugo", 7, 4, 9, 3, 16 );
//	Hero krutzbek( "Krutzbeck", 9, 4, 5, 4, 20 );
//	Hero tatiana( "Tatiana", 4, 9, 4, 6, 14 );
//	Hero lindel( "Lindel", 6, 6, 6, 5, 15 );
//	Hero challara( "Challara", 5, 6, 5, 7, 12 );
//	Hero gherin( "Gherin", 3, 4, 4, 9, 13 );

	const int fightsCount = 100000;

	Hugo hugo, hugo1;
	Krutzbeck krutzbeck, krutzbeck1;
	Lindel lindel, lindel1;
	Tatiana tatiana, tatiana1;

	Combat( hugo, hugo1, fightsCount );
	Combat( krutzbeck, krutzbeck1, fightsCount );
	Combat( lindel, lindel1, fightsCount );
	Combat( tatiana, tatiana1, fightsCount );

	return 0;
}
