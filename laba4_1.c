#include <stdio.h>
#include <locale.h>

int lab4() {
	setlocale(LC_CTYPE, "RUS");
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	char c = '!';
	printf("%d, %f, %lf, %c", i, f, d, c);

}