#include<stdio.h>
void main()
{
    char str[100];
    int i;
    printf("Enter the string:");
    scanf("%s",str);
   printf("\n The numbers are:");
    for(i=0;str[i]!='\0';i++)
    {
        if(isdigit(str[i]))
        {
           printf("%c",str[i]);
        }
    }
  
}
