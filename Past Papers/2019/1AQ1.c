#include <stdio.h>
int main()
{
	int type, sum = 0,number;
	char size,cd,lc,oo;
	float dis,net;
	
	printf("Enter pizza type :");
	scanf("%d", &type);
		
	while(type != -1)
	{
		
		
		if(type == 1 || type == 2)
		{
			printf("Enter pizza size :");
			scanf(" %c", &size);
		
			if(size == 'M' || size == 'L')
			{
				printf("Enter number of pizzas :");
			scanf("%d", &number);
			
			}
		else
		{
			printf("Invalid pizza size......\n");
			
			printf("Enter pizza size :");
			scanf(" %c", &size);
		}
			
		}
		else
		{
			printf("Invalid pizza type......\n");
			
			printf("Enter pizza type :");
			scanf("%d", &type);
		}
		
		if(type == 1 && size == 'L')
		{
			sum = sum + 1720 * number;
		}
		else if(type == 2 && size == 'L')
		{
			sum = sum + 1820 * number;
		}
		else if(type == 1 && size == 'M')
		{
			sum = sum + 975 * number;
		}
		else if(type == 2 && size == 'M')
		{
			sum = sum + 1000 * number;
		}
		printf("\n");
		printf("Enter pizza type :");
		scanf("%d", &type);
	}
	printf("Are you paying by credit card (Y/N)  ?");
	scanf(" %c", &cd);
	printf("Are you a loyalty customer (Y/N) ?");
	scanf(" %c", &lc);
	printf("Is this an online order (Y/N) ?");
	scanf(" %c",&oo);
	
	printf("Total bill amount: %d", sum);
	
	if(cd == 'Y')
	{
		dis = sum * 20/100.0 ;
	}
	else if(lc == 'Y')
	{
		dis = sum * 15/100.0;
	}
	else if(oo == 'Y')
	{
		dis = sum * 5/100.0;
	}
	else 
	{
		dis = 0;
	}
	printf("\nDiscount : %.2f\n", dis);
	net = sum - dis;
	printf("Net amount :%.2f", net);
	return 0; 
}
