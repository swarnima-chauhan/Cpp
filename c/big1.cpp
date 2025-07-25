#include<stdio.h>
#include<conio.h>
int main()
{
	int arr1[3], arr2[3], t,f=0;
	for(int i=0;i<3;i++)
	scanf("%d %d",&arr1[i],&arr2[i]);
	scanf("%d",&t);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			int d=arr1[i]-arr2[j];
			if(d<0)
			d=-(d);
			if(d==t)
			{
			printf("%d %d",i,j);
			f++;
		    }
		}
	}
	if(f==0)
	printf("-1 -1");
}
