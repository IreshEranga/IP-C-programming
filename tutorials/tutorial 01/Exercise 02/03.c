#include <stdio.h>

int main()    //main function begins
{
    float mark1, mark2, sum, avg;   //variable declaration
    
    printf("Enter marks for 1 subject :");    //get user inputs 
    scanf("%f", &mark1);
    
    printf("Enter marks for 2 subject :");
    scanf("%f", &mark2);
    
    sum = mark1 + mark2;
    avg = sum/2.0;
    printf("Average mark is : %.2f", avg);    //display average
    return 0;
}   //end of the main function
