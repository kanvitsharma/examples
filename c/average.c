#include <stdio.h>

double average(double x, int count);

void main(void) {
	int count;
	double x, sum = 0;

	printf("Enter the count of numbers: ");
	scanf("%i", &count);

	printf("Enter %i numbers:\n", count);
	for(int i = 1; i <= count; i++) {
		printf("> ");
		scanf("%lf", &x);

		sum += x;
	}

	printf("\nAverage: %.3lf", average(sum, count));
}

double average(double x, int count) {
	return(x / count);
}