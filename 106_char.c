#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("Corresponding character of %d is:%c",n,64+n);
}
