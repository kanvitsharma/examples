#include <stdio.h>
#include <math.h>

int factorial(int num);

void main(void) {
	double x;
	int terms;

	printf("Enter:\n> x: ");
	scanf("%lf", &x);

	printf("> no. of terms: ");
	scanf("%d", &terms);

	x++;
	if(terms == 1) printf("%lf", x);

	else
		for(int i = 2; i < terms; i++)
			x += pow(x, i) / factorial(i);

		printf("e^x = %lf", x);
}

int factorial(int num) {
	if(num == 1) return 1;
	int fact;

	fact = num * factorial(num-1);

	return fact;
}