#include <stdio.h>
int main()
{
	int number;		//variable declaration
	
	printf("Enter a integer :");		//get user inputs
	sacnf("%d", &number);
	
	if(number >= 0)
	{
		printf("Number = %d", number);
	}
	else
	{
		number = (-1)* number
		printf("Number = %d", number);
	}
	return 0;
}
