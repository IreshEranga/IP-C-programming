#include <stdio.h>
int main()
{
	int number,n,n1,n2,n3;
	
	printf("Enter a four digit number :");
	scanf("%d", &number);
	
	while(number > 999 || number <= 9999)
	{
			if(number > 999 && number <= 9999)
			{
				n = number / 1000;
				printf("%d ", n);
				
				n = number % 1000;
				n1 = n / 100;
				printf("%d ", n1);
				
				n = number % 1000;
				n = n % 100;	
				n2 = n / 10;
				printf("%d ", n2);
				
				n = number % 1000;
				n = n % 100;
				n = n % 10;	
				n3 = n / 1;
				printf("%d ", n3);
				if(n == n3 && n1 == n2)
				{
					printf("\nIt is a palindrome....");
				}
				else
				{
					printf("It is not a palindrome ");
				}
				break ;
			}
			else
			{
				printf("Invalid number.......");
			}
			printf("\nEnter a four digit number :");
			scanf("%d", &number);
	}
	return 0;
}
