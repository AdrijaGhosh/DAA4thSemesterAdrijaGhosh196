#include<stdio.h>
int main()
{
	int i,n,x;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter %d sorted values...\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the sum value\n");
	scanf("%d",&x);
	int lb=0;
	int ub=n-1;
	int min=arr[lb];
	int max=arr[ub];
	for(i=0;i<n;i++)
	{
		int sum=min+max;
		if(sum==x)
		{
			printf("\nThe numbers are %d %d\n",min,max);
			lb++;
			ub--;
			min=arr[lb];
			max=arr[ub];
		}
		else if(sum<x)
		{
			lb++;
			min=arr[lb];
			
		}
		else
		{
			ub--;
			max=arr[ub];
		}
	}
}

	
	
	
	
