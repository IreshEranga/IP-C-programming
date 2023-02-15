#include <stdio.h>

float calinterest(int fdtype, float depositamount);
float caltax(float annualinterest);
void displaydetails(float annualinterest, float taxamount);

int main()
{
	int fdtype;
	float depositamount,annualinterest, taxamount;
	
		printf("Enter Fixed Deposit type :");
		scanf("%d", &fdtype);
		
	while(fdtype != -1)
	{
		
		printf("Enter Deposit amount :");
		scanf("%f", &depositamount);
		
		annualinterest = calinterest(fdtype, depositamount);
		taxamount = caltax(annualinterest);
		
		displaydetails(annualinterest, taxamount);
		
		printf("\n\nEnter Fixed Deposit type :");
		scanf("%d", &fdtype);
	}

}

float calinterest(int fdtype, float depositamount)
{
	float annualinterest;
	if(fdtype == 1)
	{
		annualinterest = depositamount * 16/100.0;
	}
	else if(fdtype == 2)
	{
		annualinterest = depositamount * 15/100.0;
	}
	else if(fdtype == 3)
	{
		annualinterest = depositamount * 15.5/100.0;
	}
	else if(fdtype == 4)
	{
		annualinterest = depositamount * 17.5/100.0;
	}
	return annualinterest;
}

float caltax(float annualinterest)
{
	float taxamount;
	
	taxamount = annualinterest * 5/100.0;
	return taxamount;
}

void displaydetails(float annualinterest, float taxamount)
{
	
	float payableamount;
	
	payableamount = annualinterest - taxamount;
	
	printf("\nAnnual interest\t  Tax Amount\tAmount payable\n");
	printf("\n%.2f\t\t  %.2f\t\t%.2f",annualinterest, taxamount, payableamount);
	return ;
}
