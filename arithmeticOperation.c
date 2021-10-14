#include<stdio.h>
int main()
{
int sum, a,b,mul,div,sub;
printf("enter two numbers\n");
scanf("%d%d",&a, &b);
sum=a+b;
printf("the sum is %d\n",sum);

sub=a-b;
printf("the difference is %d\n",sub);

mul=a*b;
printf("the product is %d\n",mul);

div=a/b;
printf("the division is %d\n",div);
return 0;
}
