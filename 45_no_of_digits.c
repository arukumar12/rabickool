#include<stdio.h>
void main()
{
int a,count=0,r;
scanf("%d",&a);
while(a!=0)
{
r=a%10;
count++;
a=a/10;
}
printf("Number of digits:%d",count);
}

