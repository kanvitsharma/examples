#include <stdio.h>

int mul(int a, int b);

void main(void) {
	int a = 5, b = 10, c = mul(a, b);
	printf("%i x %i = %i", a, b, c);
}

int mul(int x, int y) {
	return(x * y);
}