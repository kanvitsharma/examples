#include <stdio.h>

void main(void) {
	double initial_speed, acceleration, time, i = 0, distance;

	printf("Enter initial speed: ");
	scanf("%lf", &initial_speed);

	printf("Enter acceleration: ");
	scanf("%lf", &acceleration);

	printf("Enter size of time interval: ");
	scanf("%lf", &time);

	while(i < 100) {
		distance = i * (initial_speed + (acceleration * i) / 2);
		printf("Time: %4.2lf\tDistance: %9.2lf\n", i, distance);
		i += time;
	}
}