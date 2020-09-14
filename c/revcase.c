#include <stdio.h>
#include <ctype.h>

void main(void) {
	char res = getchar();

	if(islower(res)) printf("%c", toupper(res));
	else if(isupper(res)) printf("%c", tolower(res));
}