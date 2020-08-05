/*열혈 C 프로그래밍 p.328 문제 2
10진수를 2진수로 바꾸기*/

#include <stdio.h>
int main(void)
{
	int num;
	int binary[11] = { 0 };
	int length=0, i;

	scanf_s("%d", &num);

	while (num > 0)
	{
		binary[length] = num % 2;

		num /= 2;
		length++;
	}

	for (i = 0; i < length; i++)
		printf("%d", binary[length - i-1]);
	printf("\n");

	return 0;
}