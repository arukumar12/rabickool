#include<stdio.h>
void main()
{
    char str[100],i;
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    str[0]=toupper(str[0]);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            str[i+1]=toupper(str[i+1]);
        }
    }
    printf("%s",&str);
}
