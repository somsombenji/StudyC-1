/*���� C ���α׷��� p.329 ���� 4
ȸ��*/

#include <stdio.h>
int main(void)
{
	int length, i, pal = 1;
	char str[81];

	printf("���ڿ� �Է�: ");
	scanf_s("%s", str, sizeof(str));

	for (i = 0; str[i] != '\0'; i++);
	length = i;

	for (i = 0; i < length / 2; i++)
	{
		if (str[i] != str[length - i - 1])
			pal = 0;
	}

	if (pal)
		printf("ȸ���Դϴ�.\n");
	else
		printf("ȸ���� �ƴմϴ�.\n");

	return 0;

}