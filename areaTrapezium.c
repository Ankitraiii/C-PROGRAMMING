#include<stdio.h>
int main()
{
float a,b,area,h;
printf("enter the two sides\n");
scanf("%f%f",&a,&b);
printf("enter the height\n");
scanf("%f",&h);
area = (a+b)*h/2;
printf("area is %0.3f\n",area);
return 0;
}
