#include <stdio.h>
#define SIZE 8
int main()
{
	int numArr[SIZE];
	int i, num, temp;
	
	for(i=0;i<SIZE;i++)
	{
		printf("Enter value :");
		scanf("%d", &numArr[i]);
	}
	
	printf("Array :\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d\t", numArr[i]);
	
	}
	
	printf("\n\nEnter number to move position :");
	scanf("%d", &num);
	
	if(num > 0 && num < SIZE)
	{
		while(num > 0)
		{
				temp = numArr[7];
		
		for(i=7;i>0;i--)
		{
			numArr[i] = numArr[i-1];
		}
		numArr[0] = temp;
		num--;	
		}
	
	}
	printf("\n\nNew Array :\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d\t", numArr[i]);
	
	}
	
	return 0;
}
