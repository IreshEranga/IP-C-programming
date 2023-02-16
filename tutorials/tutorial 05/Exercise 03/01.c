#include <stdio.h>
int main()		//main function begin
{
	float mark,tot;		//variable declaration
	int module;
	
	printf("Enter module marks :");
	scanf("%f", &mark);
	module = 1;
	tot = 0;
	
	while(module < 4)
	{
		tot = tot + mark;
			
		module++;
		
		printf("Enter module marks :");
		scanf("%f", &mark);
	}
	printf("Total module marks : %.2f", tot);
	return 0;
	
}   //end of the main function
