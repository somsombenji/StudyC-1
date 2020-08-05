/*¿­Ç÷ C ÇÁ·Î±×·¡¹Ö p.328 ¹®Á¦ 1
È¦, Â¦ Ãâ·Â*/

#include <stdio.h>
void printOdd(int a[]);
void printEven(int a[]);
int main(void)
{
	int arr[10] = { 0 };
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("ÀÔ·Â %d: ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	printOdd(arr);
	printEven(arr);
	return 0;
}

void printOdd(int a[])
{
	int i;

	printf("È¦¼ö Ãâ·Â: ");

	for (i = 0; i < 10; i++)
	{
		if (a[i] % 2 != 0)
			printf("%d, ", a[i]);
	}

	printf("\n");
	return;
}

void printEven(int a[])
{
	int i;

	printf("Â¦¼ö Ãâ·Â: ");

	for (i = 0; i < 10; i++)
	{
		if (a[i] % 2 == 0)
			printf("%d, ", a[i]);
	}

	printf("\n");
	return;
}