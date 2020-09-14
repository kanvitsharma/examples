#include <stdio.h>

void main(void) {
	int a = 4, b = 1, c = 2;

	printf("%i", (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
}
	