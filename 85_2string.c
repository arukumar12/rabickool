#include<stdio.h>
void main()
{
char str[100],odd[100],even[100];
int i,o=0,e=0;
printf("Enter the String:");
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
if(i%2==0)
{
odd[o]=str[i];
o++;
}
else
{
even[e]=str[i];
e++;
}
}
printf("\n The two strings are %s \t %s",odd,even);
}

