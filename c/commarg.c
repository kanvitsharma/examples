#include <stdio.h>

double add(double a, double b);
double sub(double a, double b);

void main(int argc, double *argc[]) {
	printf("%lf + %lf = %lf", argc[1], argc[2], add(argc[1], argc[2]));
	printf("%lf - %lf = %lf", argc[1], argc[2], sub(argc[1], argc[2]));
}

double add(double a, double b) {
	return(a + b);
}

double sub(double a, double b) {
	return(a - b);
}
	