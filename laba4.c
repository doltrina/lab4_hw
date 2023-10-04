#include <stdio.h>
#include <locale.h>
main() {
	task4();
}

int task4() {
	setlocale(LC_CTYPE, "RUS");
	float x;
	float y = 80;
	float B;
	float s;
	puts("Введите стоимость куска ткани в рублях за 1 кв. метр:");
	scanf("%f", &B);
	puts("Ширина куска ткани равна 80 см.");
	puts("Введите длину куска ткани в сантиметрах:");
	scanf("%f", &x);
	s = x * y;
	printf("Площадь куска ткани равна %f кв.сантиметров\nИли %f кв. метров\n", s, s / 10000);
	printf("Следовательно цена данного куска ткани: %f рублей.", s / 10000 * B);

}




int task3() {
	setlocale(LC_CTYPE, "RUS");
	int n;
	puts("Введите целое трехзначное число:");
	scanf("%d", &n);
	int c = n % 10;
	int a = n / 100;
	int b = (n - a * 100 - c) / 10;
	printf("Первое число: %d\nВторое число: %d\nСумма цифр: %d\n", a, c, b+a+c);
	printf("Обратная запись числа(математически): %d\n", c*100+b*10+a);
	printf("Обратная запись числа(хитро): %d%d%d", c, b, a);
} 
int task1() {
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