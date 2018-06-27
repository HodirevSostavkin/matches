#include "matches.h"

void rules()
{
	int turn = 0;
	system("clear");
	printf("There is 100 matches. Players take from 1 to 10 matches alternatively.\n");
	printf(" Player who took the last match would be the winner!\n 1. Back\n");
	while(turn != 1)
		scanf("%d", &turn);
}
