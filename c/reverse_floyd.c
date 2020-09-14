#include <stdio.h>

void main(void) {
	int num = 5678, m, i = 1, d;
	m = num;
	while(m != 0) {
		m /= 10;
		i *= 10;
	}

	while(num != 0) {
		printf("%d\n", num);
		d = num / i;
		num = num - d * i;
		i /= 10;
	}
}
	