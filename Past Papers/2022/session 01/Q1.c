#include <stdio.h>
int main()
{
	char element1, element2;
	int lines,i,j;
	
	printf("Enter 1st character :");
	scanf("%c", &element1);
	
	printf("Enter 2nd character :");
	scanf(" %c", &element2);
	
	printf("Enter number of lines :");
	scanf("%d", &lines);
	
	printf("\n");
	
	for(i=1;i<=lines;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j %2 == 0)
			{
				printf("%c ", element2);
			}
			else
			{
				printf("%c ", element1);
			}
			
		}
		printf("\n");
	}
	return 0;
}
