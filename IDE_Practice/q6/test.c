#include <stdio.h>
#pragma warning (disable:4996)

int second(int num1);

int second(num1) {
	int h, m, s;

	printf("�� �Է�: ");
	scanf("%d", &num1);

		h = num1 / 3600;
		m = (num1%3600) / 60;
		s = num1 % 60;
		printf("%d�� %d�� %d��", h, m, s);
}

void main() {
	int num1=0;

	second(num1);
}