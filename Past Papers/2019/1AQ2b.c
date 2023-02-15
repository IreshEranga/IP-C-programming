#include <stdio.h>
int main()
{
	int ratings[3][4];
	int i, j, sum,bestmovie;
	float average, max =0;
	
	for(i=0;i<3;i++)			//read the movie ratings from the keyboard
	{
		for(j=0;j<4;j++)
		{
			printf("Movie %d reviewer %d ratings :", i+1,j+1);
			scanf("%d", &ratings[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nMovie\tReviewer 01\tReviewer 02\tReviewer 03\tReviewer 04\n");
	
	for(i=0;i<3;i++)	//display array in tabular format
	{
		printf("%d\t\t",i+1);
		
		for(j=0 ;j<4 ;j++)
		{
			printf("%3d\t\t", ratings[i][j]);
		}
		printf("\n");
	}
	
		for(i=0;i<3;i++)	//display average reviews for each movie
	{	
		sum = 0;
		for(j=0;j<4;j++)
		{
			sum = sum + ratings[i][j];
		}
		average = sum /4.0;
		if(average > max)
		{
			max = average;
			bestmovie = i +1;
		}
		printf("Movie %d has %.2f Average\n", i+1,average);
	}
	
	printf("\n%d Movie has the highest ratings %.2f", bestmovie,max);		//display the highest rating movie and the movie

	
	return 0;
}
