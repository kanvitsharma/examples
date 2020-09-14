#include <stdio.h>

#define MONTH 30

void main(void) {
	int days, months;

	printf("Enter days: ");
	scanf("%i", &days);

	months = days / MONTH;
	days %= MONTH;

	printf("Months: %i\nDays: %i", months, days);
}
	