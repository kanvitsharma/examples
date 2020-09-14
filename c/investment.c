#include <stdio.h>

#define PERIOD 10
#define PRINCIPAL 5500.00

void main(void) {
	int year;
	float amount, value, inrate;

	amount = PRINCIPAL;
	inrate = 0.12;
	year = 0;

	while(year <= PERIOD) {
		printf("%2d	%8.2f\n", year, amount);
		value = amount + inrate * amount;
		year++;
		amount = value;
	}
}