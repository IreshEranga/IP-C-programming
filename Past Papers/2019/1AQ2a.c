#include <stdio.h>
int fib[10];
int main()
{
	
	int i,j,k;
	
	fib[0] = 0;
	fib[1] = 1;
	 j = 0, k= 1;
	
	for(i=2;i<10;i++)
	{
		printf("fib[%d] = fib[%d] + fib[%d]\n",i,j,k);
		j++;
		k++;
	}
	j = 0 , k= 1;
	
	printf("\n0\t1\t");
	for(i=2;i<10;i++)
	{
		
		fib[i] = fib[j] + fib[k];
		printf("%d\t", fib[i]);
		j++;
		k++;
	}
	return 0;
}
