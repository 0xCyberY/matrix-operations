#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[10][10], b[10][10], c[10][10];
int i,j,k,ch,m,n,p,q;
printf("Enter size of 1st matrix\n");
scanf("%d %d",&m,&n);
printf("Enter 1st matrix \n");
for(i=0; i<m; i++)
   for(j=0; j<n; j++)
   scanf("%d", &a[i][j]);
   printf("Enter size of 2nd matrix\n");
   scanf("%d %d", &p, &q);
printf("Enter 2nd matrix \n");
for(i=0; i<p; i++)
   for(j=0; j<q; j++)
   scanf("%d", &b[i][j]);
   printf("Matrix Operations: \n 1. Addition \n 2. Subtraction \n 3.Multiplication \n");
   printf("Enter your choice : ");
   scanf("%d",&ch);
   switch (ch)
   {
	case 1 : if(m!=p || n!=q)
	printf("Matrix Addition is not possible.");
	else
	{
	for(i=0; i<m; i++)
	   for(j=0; j<n; j++)
		c[i][j] = a[i][j] + b[i][j];
		printf("Matrix Addition is : \n");
	   for(i=0; i<m; i++)
	   {
		for(j=0; j<n; j++)
	   printf("%d ",c[i][j]);
	   printf("\n");
	   }
	}
break;
case 2 :if(m!=p || n!=q)
printf("Matrix Subtraction is not possible.");
else
{
   for(i=0; i<m; i++)
   {
	for(j=0; j<n; j++)
	c[i][j]=a[i][j]-b[i][j];
   }
printf("Matrix Subtraction is : \n");
for(i=0; i<m; i++)
{
   for(j=0; j<n; j++)
   printf("%d ",c[i][j]);
   printf("\n");
}
}
break;
case 3 :if(n!=p)
printf("Matrix Multiplication is not possible.");
else
{
   for(i=0; i<m; i++)
   {
	for(j=0; j<q; j++)
	{
	c[i][j]=0;
	for(k=0; k<p; k++)
	   c[i][j]=a[i][k]*b[k][j]+c[i][j];
	}
   }
printf("Matrix Multiplication is : \n");
for(i=0; i<m; i++)
{
   for(j=0; j<q; j++)
   printf("%d ",c[i][j]);
   printf("\n");
}
}
break;
}
}
