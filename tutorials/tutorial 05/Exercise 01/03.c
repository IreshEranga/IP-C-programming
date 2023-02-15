#include <stdio.h>
int main()
{
	int num,sum;
	float avg;
	
	sum = 0;

	
	printf("Enter a positive number :");
	scanf("%d", &num);
		
	while(num > 0)
	{
		sum = sum + num;
		avg = sum/2.0;
		
	    printf("%d\n");
	    	
		printf("Enter a positive number :");
		scanf("%d", &num);
		
	}
	printf("Sum = %d", sum);
	printf("\nAverage : %.2f", avg);
	return 0;
}
