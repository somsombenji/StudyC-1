/*���� C ���α׷��� p.320 ����1
call-by-value, call-by-reference ����� �������ִ� �Լ� �����*/

#include <stdio.h>
int SquareByValue(int n);
void SquareByReference(int* n);
int main(void)
{
	int num, copy;

	scanf_s("%d", &num);

	copy = SquareByValue(num);
	SquareByReference(&num);

	printf("%d %d\n", copy, num);
	return 0;
}

int SquareByValue(int n)
{
	return n * n;
}

void SquareByReference(int* n)
{
	int n2 = *n;

	*n = n2 * n2;
	return;
}
