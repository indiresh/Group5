#include <stdio.h>
#include <stdlib.h>

void printStar(int starLength)
{       
	int index = 0;
        while(index < starLength)
        {
		printf("*");
		index++;
	}
	printf("\n");

        return;
}

void printSpace(int spaceLength)
{       
	int index = 0;
	printf("*");
        while(index < spaceLength)
        {
		printf(" ");
		index++;
	}

	printf("*");
	printf("\n");
        
	return;
}

int main()
{

	int intStarLength = 52;
	int intSpaceLength = 50;

	printStar(intStarLength);
	printSpace(intSpaceLength);
	printSpace(intSpaceLength);

	printf("* Welcome to the SECS server at Oakland University *\n");

	printSpace(intSpaceLength);
	printSpace(intSpaceLength);
	printStar(intStarLength);
	
	return (0);
}