#include<stdio.h>
int main(void){

int Length,Breadth,Perimeter,Area;

printf("Enter the value of Length");
printf("Enter the value of Breadth");
scanf("%d %d",&Length,&Breadth);

Perimeter= 2* (Length + Breadth);
Area= Length*Breadth;

printf("Perimeter=%d\n",Perimeter);
printf("Area=%d",Area);
}
