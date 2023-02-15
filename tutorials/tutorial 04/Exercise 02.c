#include <stdio.h>
int main()
{
	char transactiontype;                       //variable declaration
	float bankbalance, amount, newbankbalance;
	
	printf("Enter transaction type :");     //get user inputs
	scanf(" %c", &transactiontype);
	
	printf("Enter bank balance :");
	scanf("%f",&bankbalance);
	
	
	if(transactiontype == 'w' || transactiontype == 'W')
	{
		printf("You have selected to withdraw money----");
		
		printf("\nEnter withdraw amount :");
		scanf("%f",&amount);
		
		newbankbalance = bankbalance - amount;
		printf("\nNew bank balance : %.2f",newbankbalance );
	}
	else if(transactiontype == 'd' || transactiontype == 'D')
	{
		printf("You have selected to deposite money----");
		printf("\nEnter withdraw amount :");
		scanf("%f",&amount);
		
		newbankbalance = bankbalance + amount;
		printf("\nNew bank balance : %.2f",newbankbalance );
	}
	else
	{
		printf("Invalid transaction type-----");
	}
	
	 
	return 0;
}
