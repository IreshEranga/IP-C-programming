#include <stdio.h>
int main()

{
	float fare1, fare2, fare3, totalFare, totalCost;    //variable declaration
	
	printf("Enter Bus 01 fare :");    //get user inputs
	scanf("%f", &fare1);
	
	printf("Enter Bus 02 fare :");
	scanf("%f", &fare2);
	
	printf("Enter Bus 03 fare :");
	scanf("%f", &fare3);
	
	totalFare = 2(fare1 + fare2 + fare3) * 5 * 14;      //calculate total fare for semester
	totalCost = totalFare * 50.00;                    //calculate total cost for semester 
	
	printf("Total cost is : %.2f", totalCost);
	return 0;
}
