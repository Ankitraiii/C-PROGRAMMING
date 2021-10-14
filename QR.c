#include<stdio.h>
int main()
{
printf("enter two numbers\n");
int x,y;
scanf("%d",&x);
scanf("%d",&y);
int q,r;
q=x/y;
r=x%y;
printf("the quotient is %d and the remainder is %d \n",q,r);
return 0;
}
