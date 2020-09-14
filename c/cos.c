#include <math.h>
#define PI 3.1416
#define MAX 180
#include <stdio.h>

void main(void) {
	int angle = 0;
	float x, y;

	printf("Angle\tcos(angle)\n");

	while(angle <= MAX) {
		x = (PI / MAX) * angle;
		y = cos(x);

		printf("%15d\t%13.4f\n", angle, y);
		angle += 10;
	}
}

	