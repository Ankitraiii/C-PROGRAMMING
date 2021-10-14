#include<stdio.h>
int main()
{
int a;char b;float c;double d;
printf("enter the integer,float,double datatypes\n");
scanf("%d %f %lf", &a  ,&c ,&d);
printf(" integer %d float %0.3f double %0.3lf\n", a,c,d);
printf("enter char\n");
scanf(" %c",&b);
printf("char %c\n", b);

return 0;
}
