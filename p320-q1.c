/*열혈 C 프로그래밍 p.320 문제1
call-by-value, call-by-reference 기반의 제곱해주는 함수 만들기*/

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
