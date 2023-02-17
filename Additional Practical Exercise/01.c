#include <stdio.h>

int main()
{
	int pkg, amount;		//variable declaration
	float discount, finalamou;
	
	printf("Enter your package :");			//get user inputs
	scanf("%d", &pkg);
	
	if(pkg == 1)
	{
		discount = 3/100.0;
		amount = 8000;
	}
	else if(pkg == 2)
	{
		discount = 5/100.0;
		amount = 9500;
	}
	else if(pkg == 3)
	{
		discount = 7/100.0;
		amount = 12500;
	}
	else
	{
		printf("Invalid package-------\n");
	}
	
	finalamou = amount - (discount*amount);
	printf("You have to pay %.2f", finalamou);		//print final amount to pay
	
	return 0;
}
