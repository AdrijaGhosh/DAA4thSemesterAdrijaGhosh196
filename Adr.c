#include <stdio.h>
#include <math.h>
void divideMatrix(int  n,int arr[][n])
{
 	if(n==2)
 	{ 
 		printf("Divided Matrix...");
 		printf("%d %d\n",arr[0][0],arr[0][1]);
 		printf("%d %d\n",arr[1][0],arr[1][1]);
 	}
 	return;
 	int half=n/2;
 	divideMatrix(half,arr);
 	divideMatrix(half,arr[0][half]);
 	divideMatrix(half,arr[half][0]);
 	divideMatrix(half,arr[half][half]);
}
void padding(int m,int n,int arr[m][n])
{       int i,j;
	int a=(m>n)?m:n;
	int pow=1;
	while(pow<a)
	{
		pow=pow*2;
	}
	a=pow;
	int b[a][a];
	int cd=a-n;
	int rd=a-m;
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			b[i][j]=0;
		}
	}
	for(i=rd;i<a;i++)
	{
		for(j=cd;j<a;j++)
		{
			b[i][j]=arr[i-rd][j-cd];
		}
	}
	printf("\nPadded matrix =\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	divideMatrix(a,arr);
	
}
int main()
{
	int m,n,p,q,i,j;
	printf("Enter number of rows of array 1 : ");
	scanf("%d",&m);
	printf("Enter number of cols of array 1 : ");
	scanf("%d",&n);
	int arr[m][n];
	printf("Enter %dX%d numbers:\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	padding(m,n,arr);
	printf("Enter number of rows of array 2 : ");
	scanf("%d",&p);
	printf("Enter number of cols of array 2 : ");
	scanf("%d",&q);
	if(n!=p)
	{
	  	printf("Multiplication not possible");
	}
	else
	{int ary[p][q];
	printf("Enter %dX%d numbers:\n",p,q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	padding(p,q,ary);
	
	}
	
}


