/*열혈 C 프로그래밍 p.329 문제 4
회문*/

#include <stdio.h>
int main(void)
{
	int length, i, pal = 1;
	char str[81];

	printf("문자열 입력: ");
	scanf_s("%s", str, sizeof(str));

	for (i = 0; str[i] != '\0'; i++);
	length = i;

	for (i = 0; i < length / 2; i++)
	{
		if (str[i] != str[length - i - 1])
			pal = 0;
	}

	if (pal)
		printf("회문입니다.\n");
	else
		printf("회문이 아닙니다.\n");

	return 0;

}