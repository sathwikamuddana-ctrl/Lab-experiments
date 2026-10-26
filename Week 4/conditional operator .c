#include<stdio.h>
int main()
{int a,b,c;
printf("\nenter a,b,c values:");
scanf("\n%d%d%d",&a,&b,&c);
(a>b&&a>c)? printf("%d is max",a):(b>c)? printf("%d is max",b):printf("%d is max",c);}  