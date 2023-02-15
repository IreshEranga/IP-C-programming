#include <stdio.h>
int main()
{
	int num;
	
	printf("Enter a positive number :");
	scanf("%d", &num);
		
	while(num > 0)
	{
	    printf("%d\n");
	    	
		printf("Enter a positive number :");
		scanf("%d", &num);
		
	
	}
	return 0;
}
