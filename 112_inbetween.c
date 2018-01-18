#include<stdio.h>
void main()
{
int l,r,a[100],i,n;
printf("\n Enter the two numbers:");
scanf("%d%d",&l,&r);
printf("\n Enter the n:");
scanf("%d",&n);
printf("\n Enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>l&&a[i]<r)
{
printf("Yes");
}
else
{
printf("No");
}
}
}
