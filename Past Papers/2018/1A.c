#include <stdio.h>
int main()
{
	
	int num1 = 0, num2 = 0, num3 = 0,i;     //variable declaration
	float sum1 = 0, sum2 = 0, sum3 = 0;
	char coursetype;
	
	for(i=0;i<100;i++)
	{
		printf("Enter course type :");      //get user inputs
		scanf(" %c", &coursetype);
		
		if(coursetype == 'H' || coursetype == 'h')
		{
			num1++;
			sum1 = sum1 + 1500;
		}
		else if(coursetype == 'M' || coursetype == 'm')
		{
			num2++;
			sum2 = sum2 + 2000;
		}
		else if(coursetype == 'F' || coursetype == 'f')
		{
			num3++;
			sum3 = sum3 + 2500;
		}
		else
		{
			printf("Invalid course type.......\n");
			i = i - 1;
		}
	}
	
	printf("Total number of stusents ----------------\n");      //print details
	printf("\tDIPLOMA IN HOSPITALITY MANAGEMENT : %d\n", num1);
	printf("\tDIPLOMA IN MARKETING : %d\n", num2);
	printf("\tDIPLOMA IN FINANCE : %d\n", num3);
	printf("\nTotal earnings from cources ----------------\n");
	printf("\tDIPLOMA IN HOSPITALITY MANAGEMENT : %.2f\n", sum1);
	printf("\tDIPLOMA IN MARKETING : %.2f\n", sum2);
	printf("\tDIPLOMA IN FINANCE : %.2f\n", sum3);
	
}
