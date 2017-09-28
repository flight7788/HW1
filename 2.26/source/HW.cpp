#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;
	printf("請輸入整數1:\n");
	scanf_s("%d", &num1);
	printf("請輸入整數2:\n");
	scanf_s("%d", &num2);

	if ((num1%num2) == 0)
	{
		printf("%d是%d的倍數\n",num1,num2);
	}
	else
	{
		printf("%d不是%d的倍數\n", num1, num2);
	}
	system("pause");
	return 0;
}