#include<stdio.h>
#include<conio.h>
void main()
{
int mark[5],i;
clrscr();
for(i=0;i<5;i++)
{
printf("enter array element=");
scanf("%d",&mark[i]);

}
for(i=0;i<5;i++)
{
printf("%d\n",mark[i]);
getch();
}
}