#include <stdio.h>
/* not ���� ����ǥ
   ~ 0 => 0
   ~ 1 => 1
 */
void main(){
		int num1 = 15;   // 00000000 00000000 00000000 00001111
		int num2 = ~num1;
					     // 11111111 11111111 11111111 11110000
						 // �ֻ��� ��Ʈ(���� ����)�� ��ȣ��Ʈ(MSB)�� ��Ÿ����.
						 // master sign bit
						 // 0�̸� ���
						 // 1�̸� ����
						 // ������ ��쿡�� 2�� ������ ���Ѵ�.
						 // ���� ��Ʈ:	11111111 11111111 11111111 11110000 �� 2�� ������
						 // step1)		00000000 00000000 00000000 00001111 bit�� ��ȯ�Ѵ�.
						 // step2)		00000000 00000000 00000000 00010000 +1�� �Ѵ�. (������ ��� -���δ�.)

		printf("not ������ ���:%d\n", num2);
}