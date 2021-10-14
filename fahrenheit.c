#include<stdio.h>
int main()
{
float c,f;
printf("enter tempertaure in c\n");
scanf("%f",&c);
f=(c*9/5)+32;
printf("%0.2f celsius ,%0.2f fahrenheit\n",c,f);
return 0;
}
