#include<stdio.h>
#include<math.h>
int main()
{float x1,y1,x2,y2;
printf("\nenter starting point and final point:");
scanf("\n%f%f%f%f",&x1,&y1,&x2,&y2);
printf("\nThe distance travelled by the object is %.2f",sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
}