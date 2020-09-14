#include <stdio.h>

void main(void) {
	int r = 4;

	for(int i = 0; i <= r; i++) {
		for(int j = 0; j <= i; j++)
			printf("*\t");
		printf("\n");
	}
}

	