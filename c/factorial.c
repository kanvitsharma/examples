#include <stdio.h>

int factorial(int num);

void main(void) {
	int num;
	scanf("%d", & num);

	printf("%d", factorial(num));
}

int factorial(int num) {
	if(num == 1) return 1;
	int fact;

	fact = num * factorial(num-1);

	return fact;
}