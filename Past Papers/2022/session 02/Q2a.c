#include <stdio.h>
int main()
{
	int userrating[5];
	int i,count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
	
	printf("Enter ratings :");
	scanf("%d", &userrating[5]);
	
	while(userrating[5] != -99)
	{
		if(userrating[5] == 1 )
		{
			count1 = count1 + 1;
		}
		else if(userrating[5] == 2)
		{
			count2 = count2 + 1;
		}
		else if(userrating[5] == 3)
		{
			count3 = count3 + 1;
		}
		else if(userrating[5] == 4)
		{
			count4 = count4 + 1;
		}
		else if(userrating[5] == 5)
		{
			count5 = count5 + 1;
		}
		else
		{
			printf("Invalid ratings..........");
		}
		printf("\n");
		printf("Enter ratings :");
		scanf("%d", &userrating[5]);
	}
	printf("1\t\t");
	for(i=1;i<=count1;i++)
	{
		printf("* ");
	}
	printf("\n");
	printf("2\t\t");
	for(i=1;i<=count2;i++)
	{
		printf("* ");
	}
	printf("\n");
	printf("3\t\t");
	for(i=1;i<=count3;i++)
	{
		printf("* ");
	}
	printf("\n");
	printf("4\t\t");
	for(i=1;i<=count4;i++)
	{
		printf("* ");
	}
	printf("\n");
	printf("5\t\t");
	for(i=1;i<=count5;i++)
	{
		printf("* ");
	}
	return 0;
}
