#include "matches.h"

int turn(int player, int matches)
{
	int matches_per_turn;
	bool rightCount = false;
	int matches_left = maxMatches(matches);
	printf("Type how much matches you want to take(from 1 to %d):\n", matches_left);
	while(!rightCount)
	{
		scanf("%d", &matches_per_turn);
		if(matches_per_turn < 1 || matches_per_turn > matches_left)
			printf("Type the number from 1 to %d!\n", matches_left);
		else rightCount = true;	
	}
	printf("Player %d took %d match(es)\n", player, matches_per_turn);
	return matches_per_turn;
}
