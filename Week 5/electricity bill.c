#include<stdio.h>
int main()
{int a;
printf("\nenter number of units consumed:");
scanf("\n%d",&a);
if (a>=0&&a<=100)
printf("total bill is %f",a*1.50);
if (a>=101&&a<=200)
printf("total bill is %f",a*2.50);
if (a>=201&&a<=500)
printf("total bill is %f",a*4.00);
if (a>500)
printf("total bill is %f",a*6.00);
}  