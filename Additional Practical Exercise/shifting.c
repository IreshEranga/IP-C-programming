#include <stdio.h>

int main()
{
	char arr[15];	
	//variable declaration
	int i;
	
	printf("Enter text with 15 words :");	//get user inputs
	scanf("%s", arr);
	
	printf("\nYour text\n");
	
	for(i=0;i<15;i++)
	{
		printf("%c\t", arr[i]);
	}
	printf("\n\nReversed Text\n");
	
	for(i=14;i>=0;i--)
	{
		printf("%c\t", arr[i]);
	}
	return 0;
}
