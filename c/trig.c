#include <stdio.h>
#include <math.h>

#define MAX 180
#define PI 3.1416

void main(void) {
	double x;
	int func;

	printf("Enter angle: ");
	scanf("%lf", &x);

	printf("Enter function: ");
	scanf("%d", &func);

	if(func == 1) printf("%lf", sin((PI / MAX) * x));

	else if(func == 2) printf("%lf", cos((PI / MAX) * x));

	else if(func == 3) printf("%lf", tan((PI / MAX) * x));
}