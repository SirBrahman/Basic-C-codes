#include<stdio.h>
#include<conio.h>
int main()
{
	 int x[5], i;
	 clrscr();
	 printf("\nenter 5 values:");
	 for(i=0;i<5;i++)
	 scanf("%d",&x[i]);
	 printf("values are:");
	 for(i=0;i<5;i++)
	 printf("%d ",x[i]);
	 getch();
	 }