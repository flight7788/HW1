#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, num3;
	
	printf("�п�J��� : \n");
	scanf_s("%d%d%d", &num1,&num2,&num3);
	

	if (num1 > num2 && num1 > num3)
	{
		if (num2 > num3)
		{
			printf("�̤j�� : %d\n", num1);
			printf("�̤p�� : %d\n", num3);
		}
		else
		{
			printf("�̤j�� : %d\n", num1);
			printf("�̤p�� : %d\n", num2);
		}
	}
	if (num2 > num1 && num2 > num3)
	{
		if (num1 > num3)
		{
			printf("�̤j�� : %d\n", num2);
			printf("�̤p�� : %d\n", num3);
		}
		else
		{
			printf("�̤j�� : %d\n", num2);
			printf("�̤p�� : %d\n", num1);
		}
	}
	if (num3 > num2 && num3 > num1)
	{
		if (num2 > num1)
		{
			printf("�̤j�� : %d\n", num3);
			printf("�̤p�� : %d\n", num1);
		}
		else
		{
			printf("�̤j�� : %d\n", num3);
			printf("�̤p�� : %d\n", num2);
		}
	}






	system("pause");
	return 0;
}