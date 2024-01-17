#include "random.h"

int main()
{
    int i = 0;
    while(i < 100){ 
        printf("%d\n",randchar());
        i++;
    }
}

int randchar()
{
	//pick a random int using rand function
	//return that int between range 65 - 90
    int range = rand() % (90 + 1 - 65) + 65;
    
    
    
	return range;


}