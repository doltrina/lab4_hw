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
	puts("������� ��������� ����� ����� � ������ �� 1 ��. ����:");
	scanf("%f", &B);
	puts("������ ����� ����� ����� 80 ��.");
	puts("������� ����� ����� ����� � �����������:");
	scanf("%f", &x);
	s = x * y;
	printf("������� ����� ����� ����� %f ��.�����������\n��� %f ��. ������\n", s, s / 10000);
	printf("������������� ���� ������� ����� �����: %f ������.", s / 10000 * B);

}




int task3() {
	setlocale(LC_CTYPE, "RUS");
	int n;
	puts("������� ����� ����������� �����:");
	scanf("%d", &n);
	int c = n % 10;
	int a = n / 100;
	int b = (n - a * 100 - c) / 10;
	printf("������ �����: %d\n������ �����: %d\n����� ����: %d\n", a, c, b+a+c);
	printf("�������� ������ �����(�������������): %d\n", c*100+b*10+a);
	printf("�������� ������ �����(�����): %d%d%d", c, b, a);
} 
int task1() {
	setlocale(LC_CTYPE, "RUS");
	char c;
	puts("������� ������:");
	scanf("%c", &c);
	float f;
	puts("������� ������������ �����:");
	scanf("%f", &f);
	int t = f;
	int i;
	puts("������� ����� �����:");
	scanf("%d", &i);
	double d;
	puts("������� ����� ������� ��������:");
	scanf("%lf", &d);


	printf("������ ������: %c\n", c);
	printf("������� ������������ ����� %f\n", f);
	printf("����� ����� ������������� ����� %.0f\n", f);
	printf("������� ����� ������������� ����� %f\n", f - t);
	printf("������� ����� �����: %d\n", i);
	printf("������� ����� ������� ��������: %lf\n", d);

}