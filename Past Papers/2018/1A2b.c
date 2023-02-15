#include <stdio.h>
#include <assert.h>
int main()
{
	int i,j;
	char bulb[4][4];
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter color :");
			scanf(" %c", &bulb[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%c ", bulb[i][j]);	
		}
		printf("\n");
	}
	printf("\n\nRed bulbs positions\n");
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(bulb[i][j] == 'R')
			{
				printf("[%d , %d]\t", i,j);
			}
		}
		
	}
	return 0;
}
