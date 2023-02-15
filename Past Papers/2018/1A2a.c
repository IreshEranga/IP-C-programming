#include <stdio.h>
#include <string.h>
#include <math.h>

struct account
{
	int accountnumber;
	char name[10];
	char transactiontype;
	float amount;
} customer[3];

int main()
{
	int i; 
	float sum1 = 0,min,max,sum2 = 0, min1 =0 , max1 = 0 ,min2 =0, max2 = 0 ;    //variable declaration
	int minterm, maxterm;
  
	min = customer[0].amount;
	max = customer[0].amount;
  
	for(i=0;i<3;i++)
	{
		printf("Enter account number :");           //get user inputs
		scanf("%d", &customer[i].accountnumber);
		printf("Enter name :");
		scanf("%s", customer[i].name);
		printf("Enter transaction type :");
		scanf(" %c", &customer[i].transactiontype);
		
		if(customer[i].transactiontype == 'W' || customer[i].transactiontype == 'w')
		{
			
			
			printf("Enter withdrawal amount :");
			scanf("%f", &customer[i].amount);
			
			sum1 = sum1 + customer[i].amount;
			
			/*if(customer[i].amount > max1)
			{
			maxterm = i;
			}*/
			if(customer[i].amount <= min)
			{
				min = customer[i].amount;
				minterm = i;
			}
		}
		else if(customer[i].transactiontype == 'D' || customer[i].transactiontype == 'd')
		{
			printf("Enter deposite amount :");
			scanf("%f", &customer[i].amount);
			
			sum2 = sum2 + customer[i].amount;
			
			if(customer[i].amount >= max)
			{
				max = customer[i].amount;
				//cus2[10] = customer[i].name[10];
				maxterm = i;
			}
		
		}
		
	}
	
	//print it on tabular mode
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t\t", customer[i].accountnumber);
		
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%s\t\t", customer[i].name);
		
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%c\t\t", customer[i].transactiontype);
		
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%.2f\t\t", customer[i].amount);
		
	}
	printf("\n\n\n");
	printf("Total deposit amount : %.2f\n", sum2);    //print the details
	printf("Total withdrawal amount : %.2f\n", sum1);
	printf("name of the customer with maximum deposite amount : %s \n", customer[maxterm].name);
	printf("name of the customer with minimum withdrawal amount : %s \n", customer[minterm].name);
	
	return 0;
}
