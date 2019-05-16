#include <stdio.h>

void main(){
		int numerator=3;
		int denominator=4;
		double result;
		int i_result;

		// R-Value�� ����/������ ����� �����̴�.
		// L-Value�� �Ǽ��̴�.
		// �� ��쿡 R-Value�� Implicit type casting�� �̷�� ����.
		// ������ �������� ������ ������ �Ҽ��� ���ϰ� ���õȴ�.
		// ���� �������� �����̶� �� ���� ������ �ս��� ���� ���� ����ȯ�� �ʿ��ϴ�.
		//	result = numerator/ denominator;

		// Explicit Type casting (���� ����ȯ)
		// ����: (���̸�)[���/����/ǥ����]
		// case1] �Ʒ� ���� numerator������ ���� ����ȯ �Ǿ����� ���� �Ǽ��� �������� ������
		// �ǹǷ� ������ ������ denominator�� ������ ����ȯ(Implicit type casting)�� �Ͼ��.
		// result = (double)numerator/denominator;

		// Case2]	
		result = numerator/(double)denominator;

		printf("������ ���: %f \n", result);

		i_result = numerator/(double)denominator;

		// L-Value�� ���� R-Value�� �Ǽ��� ��쿡�� L-Value���� Implicit Type Casting��
		// �̷������ �ʴ´�. ������ Ÿ�� ��ü�� �ٲ� �� ���� �����̴�.
		// �� ���� �������� �ս�(data loss)�� �����ؾ� �Ѵ�.
		printf("������ ���: %d \n", i_result);

}