#include <stdio.h>
#pragma warning (disable:4996)

void main() {
		char my_calculation_option;
		int claculation_result = 0;
		int number1, number2;

		printf("=== ��Ģ���� ���� ver2 ===\n");
		printf("���ϴ� ������ �� ���� �����ϼ��� (ex +,-,*,/ ): ");
		// scanf_s()�� scanf�� ���Ȼ� ������� �����ϱ� ���� ���� �Լ��̴�.
		// sacnf�� ������ �Ȱ����� �������� ����� Ÿ���� ũ�⸦ ���ڷ�
		// �߰��� ������ �־�� �Ѵ�.
		// scanf_s("%c", &my_calculation_option);
		scanf("%c", &my_calculation_option);

		// scanf�� ����ϱ� ���ؼ���
		// ������Ʈ �������� �����Ӽ�-c++-��ó�� ���� 
		// ;_CRT_SECURE_NO_WARNINGS <- ������ �߰�
		// �Ǵ� ���α׷� ��� ���� ������ �Ʒ� �ڵ� �߰�
		// #pragma warning (disable:4996)
		printf("�� ���� �Է��ϼ���: ");
		// scanf_s("%d %d", &number1, &number2);
		scanf("%d %d", &number1, &number2);

		switch (my_calculation_option) {
		case'+':
			claculation_result = number1 + number2;
			break;
		case'-':
			claculation_result = number1 - number2;
			break;
		case'*':
			claculation_result = number1 * number2;
			break;
		case'/':
			claculation_result = number1 / number2;
			break;
		}
		printf("%d %c %d = %d", number1, my_calculation_option, number2, claculation_result);

	}

