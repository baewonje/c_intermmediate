#include <stdio.h>
#pragma warning (disable:4996)

int simplefunc1(void) {
	int num = 5;
	num++;
	printf("simplefunc1] num:%d\n", num);
	return num;
}
// �Լ��� ����(argument) �Ű�����, �Ķ����(parameter) ��
// ���������� ����. ���� ���� �޾��� �� �ٸ� �����̸�
// �Լ� ������ ���� ��� �Ҹ�ȴ�. (�޸𸮻󿡼� �������.)
int simplefunc2(int num) {
	num++;
	printf("simplefunc2] num:%d\n", num);
	//�Լ����� local variable�� ȣ�� ������ ���� �ٸ� scope�̴�.
	
	// printf("main] result:%d\n", result);
	return num;

}

void main() {
	int num = 17;
	int result = 0;
	result = simplefunc1();
	printf("main] num: %d\n", num);
	result = simplefunc2(num);
	printf("main] num: %d\n", num);
	printf("main] result:%d\n", result);
}