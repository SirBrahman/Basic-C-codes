#include<stdio.h>
int main(void){
int Principle,Rate,Time,Interest;

scanf("%d %d %d",&Principle,&Rate,&Time);
Interest=(Principle*Rate*Time)/100;

printf("Interest=%d",Interest);
}
