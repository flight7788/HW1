#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float A, B, C, D, E;
	float total;
	printf("�C�Ѧ�p���{: ");
	scanf_s("%f", &A);
	printf("\n�C�[�ڨT�o������: ");
	scanf_s("%f", &B);
	printf("\n�C�[�ڨT�o��p���{��: ");
	scanf_s("%f", &C);
	printf("\n�C�Ѫ������O: ");
	scanf_s("%f", &D);
	printf("\n�C�Ѫ��L���O: ");
	scanf_s("%f", &E);

	total = (A / C)*B + D + E;

	printf("\n�C�Ѷ}���W�Z����O: %f\n",total);

	system("pause"); 
	return 0;

}
