#include <stdio.h>
#include <assert.h>

float calremainingfuel(int vehicletype, float usedfuelquota);
float calcfuelcost(int vehicletype, float usedfuelquota);
void displaydetails(int vehicletype, float usedfuelquota, float remainingfuelquota, float fuelcost);
void testcalremainingfuel(int vehicletype,float usedfuelquota );

int main()
{
	int vehicletype;
	float usedfuelquota, remainingfuelquota, fuelcost;
	
	printf("Enter vehicle type :");
	scanf("%d", &vehicletype);
	
	while(vehicletype != -1)
	{
		printf("Enter used fuel quota :");
		scanf("%f", &usedfuelquota);
		
		testcalremainingfuel(vehicletype,usedfuelquota );
		
		remainingfuelquota = calremainingfuel(vehicletype, usedfuelquota);
		
		fuelcost = calcfuelcost(vehicletype, usedfuelquota);
		printf("\n");
		displaydetails(vehicletype, usedfuelquota, remainingfuelquota,  fuelcost);
		
		printf("\nEnter vehicle type :");
		scanf("%d", &vehicletype);
		
	}
	return 0;
}

float calremainingfuel(int vehicletype, float usedfuelquota)
{
	int allowedfuelquota;
	
		if(vehicletype == 1)
		{
			allowedfuelquota = 5;
		}
		else if(vehicletype == 2 || vehicletype == 3)
		{
			allowedfuelquota = 20;
		}
		else if(vehicletype == 4)
		{
			allowedfuelquota = 30;
		}
		else
		{
			printf("Invalid vehicle type....\n");
		}
	
	float remainingfuelquota = allowedfuelquota - usedfuelquota;
	
	return remainingfuelquota;
}

float calcfuelcost(int vehicletype, float usedfuelquota)
{
	float price, fuelcost;
	
	if(vehicletype == 1 || vehicletype == 2 || vehicletype == 4)
	{
		price = 370.00;
	}
	else if(vehicletype == 3)
	{
		price = 510.00;
	}
	
	fuelcost = usedfuelquota  * price;
	return fuelcost;
}

void displaydetails(int vehicletype, float usedfuelquota, float remainingfuelquota, float fuelcost)
{
	printf("Vehicle type\tQuota used\tQuota remaining  \tFuel cost\n");
	printf("%d\t\t%.2f\t\t%.2f\t\t        %.2f\n\n", vehicletype, usedfuelquota,remainingfuelquota,fuelcost);
	return ;
}

void testcalremainingfuel(int vehicletype,float usedfuelquota )
{
	float remainingfuelquota;
	
	assert(calremainingfuel(1,3) == 2);
	assert(calremainingfuel(2,10) == 10);
	return ;
}
