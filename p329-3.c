/*���� C ���α׷��� p.328 ���� 3
Ȧ���� �տ�������, ¦���� �ڿ������� ä���*/

#include <stdio.h>
int main(void)
{
	int arr[10] = { 0 };
	int i, evenIndex=9, oddIndex=0, num;

	for (i = 0; i < 10; i++)
	{
		printf("�Է� %d: ", i + 1);
		scanf_s("%d", &num);

		if (num % 2 == 0)
		{
			arr[evenIndex] = num;
			evenIndex--;
		}
		else
		{
			arr[oddIndex] = num;
			oddIndex++;
		}
	}

	printf("�迭����� ���: ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}