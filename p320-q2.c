/*열혈 C 프로그래밍 p.320 문제 2
세 변수에 저장된 값을 서로 뒤바꾸는 함수 만들기*/

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