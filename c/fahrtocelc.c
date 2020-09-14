#include <stdio.h>

double fahrtocelc(double fahr);

void main(void) {
	double fahr;

	printf("Enter the temperature in fahrenheit: ");
	scanf("%lf", &fahr);

	printf("The temperature in celcius: %.3lf", fahrtocelc(fahr));
}

double fahrtocelc(double fahr) {
	return((fahr - 32) / 1.8);
}
	
