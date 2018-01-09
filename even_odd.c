#include<stdio.h>
int main() {
  int n,m;
  printf("Enter the N and M:");
  scanf("%d%d",&n,&m);
  if((n-m)%2==0)
  printf("Even");
  else
  printf("Odd");
}
