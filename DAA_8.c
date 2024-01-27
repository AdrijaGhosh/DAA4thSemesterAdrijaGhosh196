#include<stdio.h>
int main()
{
	int i,n,x,mid,f=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter %d sorted values...\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the value whose occurence you want to count\n");
	scanf("%d",&x);
	int lb=0;
	int ub=n-1;
	while(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(arr[mid]==x)
		{
			f++;
			int left=mid-1;
			while(arr[left]==x && left>=0)
			{
				left--;
				f++;
			}
			int right=mid+1;
			while(arr[right]==x && right<n)
			{
				right++;
				f++;
			}
			break;
		}
		else if(arr[mid]<x)
		{
			lb=mid+1;
		}
		else
		{
			ub=mid-1;
		}
	}
	printf("Frequency of the number %d is %d",x,f);
}
