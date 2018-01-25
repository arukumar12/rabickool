#include<stdio.h>
void main()
{
int a,i,j=0;
printf("Enter the Number:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
j=j+1;
}
if(j==0)
printf("%d is Prime Number",a);
else
printf("%d is not Prime Number",a);
}
