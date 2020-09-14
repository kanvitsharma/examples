#include <stdio.h>

void main(void) {
	for(int i = 0; i < 10; i++)
		printf("%i\t%s\n", i, (i % 2) ? "Odd" : "Even");
}
	