#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	// local variable ���� ����� (���� �Ǵ� ����, �ʱ�ȭ�� ���� �Ѵ�.)
	// local variable ���� ����ο��� ������ �����ϴ� ����
	// ansi-89 style �̴�.
	
	int var1;
	// int var1; �� ���� scope���� ������ �������� ����� ������.


	for (int cnt = 0; cnt < 3; cnt++) {
		// �Լ� �ȿ� {} �ȿ� ����� ������ {}�ȿ����� ������ �����ϴ�.
		// local variable ���� ����� �̿ܿ� �߰����� ������ �����Ӱ�
		// �����ϴ� ���� ansi-99 style�̴�.
		// ansi-99 style�� ������ �����ϴ� ���� ��õ���� �ʴ´�.
		// ����������, �׸��� �������� �Ǽ��� �����Ѵ�.
		int num = 0;
		num++;
		printf("%d��° �ݺ�, �������� num�� %d\n", cnt + 1, num);

	}
	// {} scope�� num�� ���� �� �� ���� ���� �̱� ������
	// �Ʒ� �ڵ�� ������ ������ �߻��Ѵ�.
	// printf("���� num�� %d\n", num);
	// cnt�� for�� ���� {} scope�� �ش��Ѵ�.
	// printf("���� cnt�� %d\n", cnt);

	// �̷��� {} scope�� {}����ϴ� ��� ��ɹ��� �����ϰ� ����ȴ�.
	// �Ʒ� cnt�� main�Լ��� �ֻ��� {} scope�� ������.
	// �ݸ� ���� cnt�� main�Լ� �ؿ� for��{}�� scope�� ������.
	int cnt=0;

	while (1) {
		// �� for���� num�� �ٸ� sope�̱� ������ ������ �̸�����
		// �������� �����ϴ�.
		int num = 0;
		// ���� {}scope���� ���� scope�� �̾��� ������ ���� ����
		cnt++;
		if (cnt > 3) {
			break;
		}
	}
	// ���� cnt�� ���� scope�̰� ����scope���� ���� scope�� ����
	// ������ ����� ��ȿ�ϴ�.
	printf("���� cnt: %d\n", cnt);
	// num�� while������ scope�̱� ������ ���� �Ұ���
	// printf("���� num: %d\n", num);
}