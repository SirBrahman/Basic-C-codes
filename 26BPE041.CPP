#include<stdio.h>
#include<conio.h>
void main()
{ int n,q,r,t,c=0,s=0,rev=0,arm=0;
clrscr();
printf("enter a no.:");
scanf("%d",&n); t=n;
while(n)
{
      q = int(n/10);
      r = n%10;
      c++;
      s= s+r;
      arm = arm + r*r*r;
      printf("%d ",r);
      n=q;
      }
      printf("\nOriginal no. :%d\n",t);
      printf("No. of digits :%d\n",c);
      printf("Sum of digits :%d\n",s);
      printf("Reverse of no. :%d\n",rev);
      printf("Palindrome :%s\n",(t==rev)?"Yes":"No");
      printf("Armstrong no.:%s\n",(t==arm)?"Yes":"No");
      getch();
      }