#include <stdio.h>

int main() {
  float celcius, faranhite;   //variable declaration
       
       printf("Enter celcius :");   //get user inputs
       scanf("%f", &celcius);
       
       faranhite =  ((9/5.0) * celcius) + 32;   //formular for celcius to faranhite
  
       printf("Faranhite = %.2f", faranhite);//display faranhite value
  
    return 0;
}
