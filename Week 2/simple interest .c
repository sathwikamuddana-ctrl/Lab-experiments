#include<stdio.h>
int main()
{ float principal_amount,rate_of_interest,time;
printf("\nenter principal amount,rate of interest,time:");
scanf("\n%f%f%f",&principal_amount,&rate_of_interest,&time);
printf("\n Simple interest is %.2f",(principal_amount*rate_of_interest*time)/100);
}