#include <stdio.h>
#include <locale.h>

int laba4() {
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