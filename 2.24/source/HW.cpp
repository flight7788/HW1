#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("�п�J��� : \n");
	scanf_s("%d",&num);

	if (num % 2 == 0)
	{
		printf("�z��J���O����\n");
	}
	else
	{
		printf("�z��J���O�_��\n");
	}

	system("pause");
	return 0;
}