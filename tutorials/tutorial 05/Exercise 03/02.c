#include <stdio.h>
int main()		//main function begin
{
	float mark,tot;		//variable declaration
	int module,std;
	
	
	std = 0;
	tot = 0;
	
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
		std++;
		tot = 0;
	}
	
	
	return 0;
	
}
