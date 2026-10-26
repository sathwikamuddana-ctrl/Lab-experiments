#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,s;
printf("\nenter side lengths of the triangle a,b,c:");
scanf("\n%f%f%f",&a,&b,&c);
if (a+b>c&&b+c>a&&a+c>b)
{s=(a+b+c)/2;
printf("\nThe area of the triangle is %.2f",sqrt(s*(s-a)*(s-b)*(s-c)));
}
else printf("the traingle will not form with these side lenghts");}