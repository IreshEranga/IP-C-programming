#include <stdio.h>
int main(void)
{
	float num1, num2, average, sum;     //variable declaration
	
	printf("num1:");          //get user inputs
	scanf("%f", &num1);
	
	printf("num2:");
	scanf("%f", &num2);
	
	printf("sum:%.2f", num1+num2);
	
	average = (float)(num1+num2)/2;
	
	printf("average:%.2f\n", average);      
	return 0;
	
}
