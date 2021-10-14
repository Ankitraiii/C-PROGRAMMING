#include<stdio.h>
int main()
{
int a=20;
int b=100;
printf("a is %d & b is %d\n",a,b);
int c;
c=a;
a=b;
b=c;
printf("a is %d & b is %d\n",a,b);
return 0;
}
