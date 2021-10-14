#include<stdio.h>
int main()
{
float d,c,a,r;
printf("enter the value of radius\n");
scanf("%f",&r);
d=2*r;
c=2*3.14*r;
a=3.14*r*r;
printf("area is %0.2f circumference is %0.2f diameter is %0.2f\n" ,a,c,d);
return 0;
}
