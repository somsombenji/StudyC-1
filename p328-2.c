/*���� C ���α׷��� p.328 ���� 2
10������ 2������ �ٲٱ�*/

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