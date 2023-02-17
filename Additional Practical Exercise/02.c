#include <stdio.h>

int main()    //main function begin
{
	int item;
	float unitprice, quantity, price,tot;  //variable declaration
	
	tot = 0;
  
	printf("Enter item code :");    //get user inputs
	scanf("%d", &item);
		
	while(item != -1)
	{
		if(item == 1)
		{
			unitprice = 300;
		}
		else if(item == 2)
		{
			unitprice = 450;
		}
		else if(item == 3)
		{
			unitprice = 500;
		}
		else
		{
			printf("Invalid Item code ---------\n");
		}
		
		printf("Enter quantity :");
		scanf("%f", &quantity);
		
		price = quantity * unitprice;
    
		printf("Price : %.2f", price);
    
		tot = tot + price;
    
		printf("\n\nEnter item code :");
		scanf("%d", &item);
	}
	
	printf("Final bill amount is %.2f", tot);
  
	return 0;
}           //end of the main function
