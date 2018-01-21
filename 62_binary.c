#include<stdio.h>
void main()
{
char b[100];
int i,count=0;
scanf("%s",&b);
for(i=0;b[i]!='\0';i++)
{
if(b[i]!='0'||b[i]!='1')
count++;
}
if(count==0)
printf("Not binary");
else
printf("Binary");
}
