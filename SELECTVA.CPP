#include<stdio.h>
#include<conio.h>
int main()
{
	 int x[10], i;
	 clrscr();
	 printf("\nenter 10 values:");
	 for(i=0;i<10;i++)
	 scanf("%d",&x[i]);
	 printf("values are:");
	 printf("%d %d %d\n",x[3],x[6],x[8]);
	 getch();
	 }