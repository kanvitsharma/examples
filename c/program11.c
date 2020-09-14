#include <stdio.h>

void main(void) {
	char name[30], houseno[30], city[30];

	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);

	printf("Enter your house number: ");
	fgets(houseno, sizeof(houseno), stdin);

	printf("Enter your City and Pin Code: ");
	fgets(city, sizeof(city), stdin);


	printf("First Line\t:\t%s\n", name);
	printf("Second Line\t:\t%s\n", houseno);
	printf("Third Line:\t:\t%s\n", city);
}