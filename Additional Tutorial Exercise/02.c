#include <stdio.h>
int main()
{
	int dilivery;
	float distance,tot,sum1,sum2,sum3,sum4;
	char entiers;
	
	sum1 = 0 , sum2 = 0, sum3 = 0, sum4 = 0;
	dilivery = 1;
	
	while(entiers != 'N' || entiers != 'n')
	{
		printf("Enter delivery %d distance :",dilivery);
		scanf("%f",&distance);
		
		if(distance <= 3)
		{
			sum1 = sum1 + (50*distance);
			
		}
		else if(distance >3 && distance <= 8)
		{
			sum2 = sum2 + ((distance - 3) * 75) + 150;
			
		}
		else if(distance >8 && distance <= 15)
		{
			sum3 = sum3 + ((distance - 8) * 125) + 750  ;
				
		}
		else if(distance >15)
		{
			sum4 = sum4 + ((distance - 15) * 150) + 2625;
				
		}
		
		
		printf("Do you have any entiers ? ");
		scanf(" %c", &entiers);
		if(entiers == 'n' || entiers == 'N')
		{
		    break;
		}
		printf("\n");
		dilivery++;
	}
	printf("\n\nYour daily earning %.2f", sum1+sum2+sum3+sum4);
	return 0;
}
