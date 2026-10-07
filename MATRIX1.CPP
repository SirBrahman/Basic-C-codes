#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[10][10],b[10][10],c[10][10],i,j,k,p,q,m,n,sum=0;
  printf("enter the no of rows and colomns of first matrix:\n");
  scanf("%d%d",&p,&q);
  printf("enter the no of rows and columns of second matrix:\n");
  scanf("%d%d",&m,&n);
  if(q!=m)
  {
  printf("matrix with entered orders cant be multiplied with each other.");
  printf("the column of first matrix should be equal to row of second matrix");

  }
	else
{
  printf("enter the elements of first matrix:\n");
  for(i=0;i<p;i++)
  {
  for(j=0;j<q;j++)
  {
  scanf("%d",&a[i][j]);

  }

  }
  printf("enter the elements of second matrix:\n");
  for(i=0;i<m;i++)
  {
  for(j=0;j<n;j++)
  {
  scanf("%d",&b[i][j]);


  }


  }

	  //matrix multiplication operation
	  for(i=0;i<p;i++)
	  {
	  for(j=0;j<n;j++)
	  {

	  for(k=0;k<m;k++)
	  {
		sum=sum+a[i][k]*b[k][j];


	  }
		 c[i][j]=sum;
		 sum=0;
	  }


	  }
	   printf("matrix multiplication. \n");
	   for(i=0;i<p;i++)
	   {
	   for(j=0;j<n;j++)
	   {
	   printf("%d",c[i][j]);

	   }

		 printf("\n");

	   }
   }

	 getch();

}