#include <stdio.h>
int main()
{
	float num1, num2, sum, sub, divi, multi;
	char op ;
	
	printf("Enter first number :");
	scanf("%f", &num1);
	
	printf("Enter second number :");
	scanf("%f", &num2);
	
	printf("Enter symbol : ");
	scanf("%c", &op );
	
	if (op == '+')
	{
		sum = num1 + num2;
		
		printf("Addition =%f + %f = %f",num1, num2, sum);
	}
	else if (op == '-')
	{
		sub = num1 - num2;
		
		printf("Subtraction = %f - %f =%.2f",num1,num2, sub);
	}
	else if (op == '*')
	{
		multi = num1 * num2;
		printf("Multiplication = %f * %f =",num1,num2, multi);
	}
	else if (op == '/')
	{
		divi = (float)num1/num2;
		printf("Division = %f / %f =",num1,num2, divi);
	}
	
	return 0;
}
