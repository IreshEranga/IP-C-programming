#include <stdio.h>
int main()
{
	int i, pnum, sum1,sum2,sum3,totalerning;      //variable declaration
	
		for(i=1;i<=5;i++)
		{
			printf("Enter programm nomber :");    //get user inputs
			scanf("%d",&pnum);
      
			if(pnum == -99)
			{
				break;
			}
			else
			{
					switch (pnum)
				{
					case 1 : sum1 = sum1 + 1500;      //calculate sum for each programme seperately
							 break;
					case 2 : sum2 = sum2 + 1000;
							 break;
					case 3 : sum3 = sum3 + 2000;
							 break;
					default : printf("Invalid programm Number----\n");		 		 	i = i-1;	 
				}
			}
		
		}
		printf("\nTotal registration fee from java programming : %d",sum1);   //display total earnings
		printf("\nTotal registration fee from web designing : %d",sum2);
		printf("\nTotal registration fee from computer network : %d",sum3);
		
		totalerning = sum1 + sum2 +sum3;
		printf("\nTotal eranings : %d", totalerning);
		
	return 0;
}
