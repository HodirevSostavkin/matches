#include "matches.h"

void game(int mode)
{
    system("clear");
	int matches = 100;
	int matches_per_turn;
	bool firstPlayer = true;
	while(matches > 0)
	{
		printf("There is %d match(es) left\n", matches);
		if(firstPlayer)
		{
			firstPlayer = false;
			matches -= turn(1, matches);	
		}
		else if(mode == 1)
		{
			firstPlayer = true;
			matches -= turn(2, matches);
		}
		else
		{
			firstPlayer = true;
			matches_per_turn = rand() % maxMatches(matches) + 1;
			printf("Computer took %d match(es)\n", matches_per_turn);
			matches -= matches_per_turn;
		}
	}
	if(firstPlayer)
	{
		if(mode == 1)
			printf("Player 2 win!\n");
		else
			printf("Computer win!\n");
	}
	else
		printf("Player 1 win!\n");
}
