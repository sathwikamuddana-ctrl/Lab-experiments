#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,d;
printf("\nenter  four numbers:");
scanf("\n%f%f%f%f",&a,&b,&c,&d);
if (a>b&&a>c&&a>d)
  printf("\n%.2f is max",a);
else if (b>c&&b>d)
 printf("\n%.2f is max",b);
     else  if (c>d)
       printf("\n%.2f is max",c);
       else
       printf("\n%.2f is max",d);
       
  if (a<b&&a<c&&a<d)
  printf("\n%.2f is min",a);
  else if (b<c&&b<d)
 printf("\n%.2f is min",b);
       else if (c<d)
       printf("\n%.2f is min",c);
       else
       printf("\n%.2f is min",d);  }  