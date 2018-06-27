#include "matches.h"

int main()
{
	srand(time(NULL));
	int choose;
	s:
	system("clear");
	choose = 0;
	printf("\tThe \"100 matches\" game\n");
	printf("1. The game vs computer\n");
	printf("2. The game vs friend\n");
	printf("3. Quit\n");
	printf("4. Rules\n");
	while(choose < 1 || choose > 4)
	{
		printf("Type the number from 1 to 4\n");
		scanf("%d", &choose);
	}
	switch(choose)
	{
		case 1: game(0); break;
		case 2: game(1); break;
		case 3: return 0;
		case 4: rules(); goto s;
	}
	return 0;
}
