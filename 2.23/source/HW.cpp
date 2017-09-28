#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, num3;
	
	printf("叫块俱计 : \n");
	scanf_s("%d%d%d", &num1,&num2,&num3);
	

	if (num1 > num2 && num1 > num3)
	{
		if (num2 > num3)
		{
			printf("程 : %d\n", num1);
			printf("程 : %d\n", num3);
		}
		else
		{
			printf("程 : %d\n", num1);
			printf("程 : %d\n", num2);
		}
	}
	if (num2 > num1 && num2 > num3)
	{
		if (num1 > num3)
		{
			printf("程 : %d\n", num2);
			printf("程 : %d\n", num3);
		}
		else
		{
			printf("程 : %d\n", num2);
			printf("程 : %d\n", num1);
		}
	}
	if (num3 > num2 && num3 > num1)
	{
		if (num2 > num1)
		{
			printf("程 : %d\n", num3);
			printf("程 : %d\n", num1);
		}
		else
		{
			printf("程 : %d\n", num3);
			printf("程 : %d\n", num2);
		}
	}






	system("pause");
	return 0;
}