#include <stdio.h>
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
	int a=(m>n)?m:n;
	if(a%2!=0)
	{
		a++;
	}
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
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
}


