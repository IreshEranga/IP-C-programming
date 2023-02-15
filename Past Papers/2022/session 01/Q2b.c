#include <stdio.h>
int main()
{
	int identityArr[4][4];
	int i,j;
	int metrix;
	
	for(i=0;i<4;i++)
	{
		printf("Values for row %d\n", i+1);
		
		for(j=0;j<4;j++)
		{
			printf("Enter element %d : ", j+1);
			scanf("%d", &identityArr[i][j]);
		}
		printf("\n\n");
	}
	
	for(i=0;i<4;i++)
	{	
		for(j=0;j<4;j++)
		{
			printf("%d ",identityArr[i][j] );
			
		}
		printf("\n");
	}
	
	for(i=0;i<4;i++)
	{
		metrix = 0;
		
		for(j=0;j<4;j++)
		{
			if(i==j && identityArr[i][j] != 1)
			{
				metrix = 0;
				break;
			}
			else if(i != j && identityArr[i][j] != 0)
			{
				metrix = 0;
				break;
			}
			else
			{
				metrix = 1;
			}
			
		}
	}
	
	if(metrix == 1)
	{
		printf("\n\nThis is an identity Matrix");
	}
	else
	{
		printf("\n\nThis is not an identity Matrix");
	}
	
	return 0;
}
