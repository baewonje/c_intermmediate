#include <stdio.h>

// �Լ� ���� 2
// ��ȯ Ÿ�� : x 
// ���� : o
// �Լ� ���࿡ �ʿ��� �߿��� input�� ȣ���ϴ� �ʿ��� setting�� �Ͽ� �ѱ��
// ���� : �Է� ���� ���Ͽ� �Ű澲�� �ʰ� �Լ��� ���� �⳶�� ������ �� �ִ�.
// ���� : ȣ�� �ϴ� �ʿ��� �Է¿� ���� ��Ȯ�� ������ �˾ƾ� ����� �� �ִ�.
void my_add(int input_number1, int input_number2){
		int result;

		printf("\n- ������ ���� ���� ver1\n");
		if(input_number1 > 0 && input_number2 > 0){
				printf("ù ��° �Է�: %d\n", input_number1);
		printf("�� ��° �Է�: %d\n", input_number2);
		
		result = input_number1 + input_number2;
		printf("%d + %d = %d \b", input_number1, input_number2, result);
		}else{
				printf("����� ����� ���ؼ��� ������ �����մϴ�. \n");
}
}

void main(){ 
   int number1, number2;		
		while(1){
		printf("�� ���� �Է��ϼ���: ");
		scanf("%d %d", &number1, &number2);
		if(number1 < 0 || number2 < 0){
			printf("���� ���� ������ ����� �����մϴ�. Ȯ���ϰ� �ٽ� �Է��ϼ���.\n");
		}else{

		my_add(number1, number2); // �Լ� ȣ��(function call)
		break;
		}
		}
		/*
		my_substraction();
		my_multiplication();
		my_multiplication();
		my_division();
		*/
}
