#include <stdio.h>
#include <assert.h>

float calcAnnualInterest(float interestRate, float amount);		//function prototype 
float findtotalAmount(float interestRate, float amount);
void testTotalAmount();

int main()		//main function begin
{
	float amount, interestRate, interest, totalamount;		//variable declaration
	int i;
	
	printf("Enter Initial Amount to be invested :");		//get inputs from user
	scanf("%f", &amount);
	
	printf("Enter Annual Interest rate (in percentage) :");
	scanf("%f", &interestRate);
	
	
	for(i=1;i<=5;i++)			
	{
		interest = calcAnnualInterest(interestRate, amount);	//call the function	annual interest calculation
		totalamount = findtotalAmount(interestRate, amount);		//call the function total amount
		
		printf("Amount after year %d  : %.2f\n", i,totalamount);
		
		amount = amount + interest;
	}
	testTotalAmount();
	return 0;
}

float calcAnnualInterest(float interestRate, float amount)		//called function for cal annual interest
{
	float interest;
	if(amount >= 0 && amount <= 1000000)
	{
		interest = amount * interestRate /100.0;
	}
	else if(amount > 1000000)
	{
		interest = amount * (interestRate + 0.5) /100.0;
	}
	else
	{
		printf("\nInvalid Amount .........\n");
	}
	return interest;
}

float findtotalAmount(float interestRate, float amount)			//called function for cal final total amount
{
	float totalamount, interest;
	totalamount = interest + amount;
	return totalamount;
}



void testTotalAmount()
{
	assert(fabs(findtotalAmount(10, 50000) - 55000) < 0.1);
	return ;
}
