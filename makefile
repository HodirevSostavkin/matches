default: bin/matches

test: bin/matches_test
	bin/matches_test

bin/matches: build/main.o build/game.o build/maxMatches.o build/rules.o build/turn.o
	gcc -Wall -Werror build/main.o build/game.o build/maxMatches.o build/rules.o build/turn.o -o bin/matches

bin/matches_test: build/main_test.o build/maxMatches.o
	gcc -Wall -Werror build/main_test.o build/maxMatches.o -o bin/matches_test

build/main.o: src/main.c
	gcc -std=c99 -Wall -Werror -c src/main.c -o build/main.o

build/game.o: src/game.c
	gcc -std=c99 -Wall -Werror -c src/game.c -o build/game.o

build/maxMatches.o: src/maxMatches.c
	gcc -std=c99 -Wall -Werror -c src/maxMatches.c -o build/maxMatches.o

build/rules.o: src/rules.c
	gcc -std=c99 -Wall -Werror -c src/rules.c -o build/rules.o

build/turn.o: src/turn.c
	gcc -std=c99 -Wall -Werror -c src/turn.c -o build/turn.o

build/main_test.o: test/main.c
	gcc -std=c99 -I thirdparty -I src -Wall -Werror -c test/main.c -o build/main_test.o
