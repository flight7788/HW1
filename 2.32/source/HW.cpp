#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float BMI,heigh,weight,h;

	printf("�п�J�A������(����): \n");
	scanf_s("%f", &heigh);
	printf("�п�J�A���魫(����): \n");
	scanf_s("%f", &weight);

	h = heigh / 100;
	BMI = weight / (h*h);
	printf("BMI VALUES : %.1f\n\n",BMI);
	

	printf("Underweight: less then 18.5\n");
	printf("Normal:		 between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");
    
	system("pause");
	return 0;

	
}
	

