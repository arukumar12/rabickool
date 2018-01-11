#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
printf("\n Enter the string:");
gets(str);
if(str==strrev(str))
{
printf("Palindrome");
}
else
{
printf("Not palindrome");
}
}
