#include<stdio.h>
int main()
{
int i,count=0;
char x[100];
gets(x);
for(i=0;x[i]!='\0';i++)
{
count++;
}
printf("length of a word is %d",count);

return 0;
}
