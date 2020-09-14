#include <stdio.h>
#include <math.h>

#define LAMBDA 0.001

void main(void) {
	double t;
	float r;
	int i, R;

	for(t = 0; t <= 3000; t+=150) {
		r = exp(-LAMBDA * t);
		R = (int)(50 * r + 0.5);

		printf("|");
		for(i = 1; i <= R; i++)
			printf("*");
	}
}