/*���� C ���α׷��� p.320 ���� 2
�� ������ ����� ���� ���� �ڹٲٴ� �Լ� �����*/

#include <stdio.h>
void Swap(int* n1, int* n2, int* n3);
int main(void)
{
	int num1, num2, num3;

	scanf_s("%d %d %d", &num1, &num2, &num3);

	Swap(&num1, &num2, &num3);

	printf("%d %d %d\n", num1, num2, num3);
	return 0;
}

void Swap(int* n1, int* n2, int* n3)
{
	int temp;

	temp = *n3;
	*n3 = *n2;
	*n2 = *n1;
	*n1 = temp;

	return;
}