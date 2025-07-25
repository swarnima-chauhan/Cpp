#include<stdio.h>
int main()
{
	int arr[5]={2,2,2,2,2},t;
	for(int i=0;i<6;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&t);
	for(int i=0;i<6;i++)
	{
		for(int j=i+1;j<6;j++)
		{
			for(int k=j+1;k<6;k++)
			{
				for(int l=k+1;l<6;l++)
				{
					int sum=arr[i]+arr[j]+arr[k]+arr[l];
					if(sum==t)
					printf("%d %d %d %d\n",arr[i],arr[j],arr[k],arr[l]);
				}
			}
		}
	}
}
