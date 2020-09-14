#include <stdio.h>

double add(double a, double b);
double sub(double a, double b);

void main(void) {
	double a, b;

	printf("> a: ");
	scanf("%lf", &a);

	printf("> b: ");
	scanf("%lf", &b);

	printf("%.2lf + %.2lf = %.2lf\n", a, b, add(a, b));
	printf("%.2lf - %.2lf = %.2lf", a, b, sub(a, b));
}

double add(double a, double b) {
	return(a + b);
}

double sub(double a, double b) {
	return(a - b);
}
	