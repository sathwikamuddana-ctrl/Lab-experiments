#include<stdio.h>
int main()
{ float Fahrenheit;
printf("\n enter Fahrenheit temperature:");
scanf("\n%f",&Fahrenheit);
printf("\nCelsius temperature is %.2f",(Fahrenheit-32)*5/9);
}