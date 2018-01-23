#include<stdio.h>
void main(){
float l,b,h;
float area,vol;
printf("Enter the l,b,h:");
scanf("%f%f%f",&l,&b,&h);
area=2*(l*b+b*h+h*l);
vol=l*b*h;
printf("\nThe area of cuboid is:%f",area);
printf("\nThe volume of cuboid is:%f",vol);
}
