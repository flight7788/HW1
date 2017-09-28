#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float A, B, C, D, E;
	float total;
	printf("每天行駛里程: ");
	scanf_s("%f", &A);
	printf("\n每加侖汽油的價格: ");
	scanf_s("%f", &B);
	printf("\n每加侖汽油行駛哩程數: ");
	scanf_s("%f", &C);
	printf("\n每天的停車費: ");
	scanf_s("%f", &D);
	printf("\n每天的過路費: ");
	scanf_s("%f", &E);

	total = (A / C)*B + D + E;

	printf("\n每天開車上班的花費: %f\n",total);

	system("pause"); 
	return 0;

}
