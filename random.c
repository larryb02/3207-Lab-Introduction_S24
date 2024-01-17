#include "random.h"

int randchar()
{
	//pick a random int using rand function
	//return that int between range 65 - 90
    int range = rand() % (90 + 1 - 65) + 65;
    printf("%d", range);
	return range;


}