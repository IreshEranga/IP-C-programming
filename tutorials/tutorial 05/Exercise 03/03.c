#include <stdio.h>
int main()		//main function begin
{
	float mark,tot,max;		//variable declaration
	int module,std,maxterm;
	
	
	std = 0;
	tot = 0;
	max = 0;
	
	while(std<3)
	{
		printf("Student %d marks \n", std+1);
		module = 0;
		
		while(module < 4)
		{
			printf("Enter module %d marks :",module+1);
			scanf("%f", &mark);
			
			tot = tot + mark;
				
			module++;
			
		}
		printf("Student %d total = %.2f\n\n",std+1, tot);
    
		if(tot > max)
		{
			max = tot;
			maxterm = std+1;
		}
    
		std++;
		tot = 0;
	}
	
	printf("Student %d has highest total marks %.2f", maxterm,max);
	return 0;
	
}
