/*열혈 C 프로그래밍 p.328 문제 3
홀수는 앞에서부터, 짝수는 뒤에서부터 채우기*/

#include <stdio.h>
int main(void)
{
	int arr[10] = { 0 };
	int i, evenIndex=9, oddIndex=0, num;

	for (i = 0; i < 10; i++)
	{
		printf("입력 %d: ", i + 1);
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

	printf("배열요소의 출력: ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}