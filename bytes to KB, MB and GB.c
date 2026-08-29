#include<stdio.h>
int main(void){
float bytes,KB,MB,GB;

printf("Enter the value of Bytes");
scanf("%f",&bytes);

KB=bytes/1000;
MB=KB/1000;
GB=MB/1000;

printf("GB=%.5f",GB);
}
