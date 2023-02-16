#include <stdio.h>

float circleArea(float radius);		//function prototype

int main()		//main function begins
{
	float radius,area;		//variable declaration
	
	printf("Enter radius of the circle :");		//get user inputs
	scanf("%f", &radius);
	
	area = circleArea(radius);		//call the function
	printf("Area of the circle : %.2f", area);
	
	return 0;
} //end of the main function

float circleArea(float radius)
{
	float area;
	
	area = 22/7.0 * radius *radius;
	return area;
}
