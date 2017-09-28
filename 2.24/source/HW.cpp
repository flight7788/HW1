#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("請輸入整數 : \n");
	scanf_s("%d",&num);

	if (num % 2 == 0)
	{
		printf("您輸入的是偶數\n");
	}
	else
	{
		printf("您輸入的是奇數\n");
	}

	system("pause");
	return 0;
}