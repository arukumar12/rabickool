#include<stdio.h>
void main()
{
int a;
scanf("%d",&a);
if(a%2==0)
printf("The even number is:%d",a);
else
printf("The nearest even number is:%d",a-1);
}
