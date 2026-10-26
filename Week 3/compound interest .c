#include<stdio.h>
#include<math.h>
int main()
{ double principal,rate,time;
double total_amount,compound_interest;
printf("\nenter principal amount,rate of interest,time:");
scanf("\n%lf%lf%lf",&principal,&rate,&time);
printf("\n Toatal amount is %.2lf:",total_amount =principal*pow((1+rate/100),time));
printf("\nCompound interest is %.2lf:",compound_interest=total_amount-principal);
}