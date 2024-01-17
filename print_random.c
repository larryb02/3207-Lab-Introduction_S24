#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randchar();

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}


int randchar()
{
	//pick a random int using rand function
	//return that int between range of ASCII CHARS
	
	return rand();


}
