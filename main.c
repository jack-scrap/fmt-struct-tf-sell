#include <stdio.h>

enum {
	OPEN,
	CLOSE
};

const char pair[2] = {
	'[',
	']'
};

const char c = 'S';

void err(char* msg) {
	printf("Error: %s\n", msg);
}

int main(int argc, char* argv[]) {
	if (argc != 1) {
		err("Wrong number of arguments");

		return 1;
	}

	printf("%c%c%c", pair[OPEN], c, pair[CLOSE]);

	return 0;
}
