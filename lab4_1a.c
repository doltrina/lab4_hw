#include <stdio.h>
#include <locale.h>

int laba4() {
	setlocale(LC_CTYPE, "RUS");
	char c;
	puts("Введите символ:");
	scanf("%c", &c);
	float f;
	puts("Введите вещественное число:");
	scanf("%f", &f);
	int t = f;
	int i;
	puts("Введите целое число:");
	scanf("%d", &i);
	double d;
	puts("Введите число двойной точности:");
	scanf("%lf", &d);
	
	
	printf("Введен символ: %c\n", c);
	printf("Введено вещественное число %f\n", f);
	printf("Целая часть вещественного числа %.0f\n", f);
	printf("Дробная часть вещественного числа %f\n", f - t);
	printf("Введено целое число: %d\n", i);
	printf("Введено число двойной точности: %lf\n", d);
	
	




}