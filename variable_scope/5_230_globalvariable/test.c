#include <stdio.h>
#pragma warning (disable:4996)

void add(int val);
int num; // global variable(��������)�� �⺻ 0���� �ʱ�ȭ ��


void main() {
	// global variable�� ��𿡼����� (scope�� �������) ������ �����ϴ�.:
	printf("num: %d\n", num);
	add(3);
	printf("num: %d\n", num);
	num++;	// global bariable(��������) num�� �� 1 ����
	printf("num: %d\n", num);


}
void add(int val) {
	num += val;
}