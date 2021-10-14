#include<stdio.h>
int main()
{
float f,c;
printf("enter the tempertaure in f\n");
scanf("%f",&f);
c=(f-32)*5/9;
printf("%0.2f fahrenheit, %0.2f celsius/n",f,c);
return 0;
}
