#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,area,s;
printf("enter all the three sides\n");
scanf("%f%f%f",&a,&b,&c);
//printf("%f%f%f\n", a,b,c);
s=(a+b+c)/2;
//printf("%f\n", s);
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%0,f\n",area);
return 0;
}
