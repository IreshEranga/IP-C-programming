#include <stdio.h>
int main()

{
	float basicSalary, bonus;       //variable declaration
	
	printf("Enter your basic salary :");      //get user inputs
	scanf("%f", &basicSalary);
	
	bonus = basicSalary * 20/100.0;
	
	printf("Your bonus is : %.2f", bonus);    //display bonus
	return 0;
}
