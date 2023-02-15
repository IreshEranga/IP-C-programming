#include <stdio.h>
#include <assert.h>

float caldiscount(int time, float totamount);
void testcaldiscount(int time, float totamount);
float finaltot1(float totamount, float discount);
void displaygift(float finaltot);

int main()
{
		int time;
		float totamount,discount,finaltot;
		
		printf("Enter time only the hour (24 format): ");
		scanf("%d", &time);
		
		printf("Enter total bill amount :");
		scanf("%f", &totamount);
		
		discount = caldiscount(time, totamount);
		printf("Discount : %.2f\n", discount);
		
		testcaldiscount(time, totamount);
		
		finaltot = finaltot1(totamount, discount);
		printf("Final total amount : %.2f", finaltot);
		
		displaygift(finaltot);
		return 0;
}

float caldiscount(int time, float totamount)
{
	float discount;
	
	if(time >= 16 && time <= 19)
	{
		if(totamount >= 5000)
		{
			discount  = totamount * 10/100.0;
		}
		else if(totamount < 5000 && totamount >= 2500)
		{
			discount = totamount * 7/100.0;
		}
	}
	else if(time >= 20 && time <= 22)
	{
		if(totamount >= 5000)
		{
			discount  = totamount * 12/100.0;
		}
		else if(totamount < 5000 && totamount >= 2500)
		{
			discount = totamount * 9/100.0;
		}
	}
	else 
	{
		printf("Invalid time-------------\n");
	}
	return discount;
}

void testcaldiscount(int time, float totamount)
{
	assert(caldiscount(17,6000) == 600);
	assert(caldiscount(20,6000) == 720);
	
	return ;
}

float finaltot1(float totamount, float discount)
{
	float finaltotal = totamount - discount;
	
	return finaltotal;
}

void displaygift(float finaltot)
{
	if(finaltot >= 7000)
	{
		printf("\nPacket of milk!!!!!!!");
	}
	else if(finaltot >= 5000 && finaltot <= 6999.99)
	{
		printf("\nPacket of milk!!!!!!!");
	}
	else if(finaltot >= 3000 && finaltot <= 4999.99)
	{
		printf("\nPacket of milk!!!!!!!");
	}
	else
	{
		printf("NO GIFTS-----------\n");
	}
	return ;
}
