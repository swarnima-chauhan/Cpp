#include <stdio.h>

int main(){
	int i,t;
	scanf("%d",&t);
	int arr[t];
	for(int i=0;i<t;i++)
	scanf("%d",&arr[i]);
	for(int i=0;i<t;i++)
	{
		for(int j=1;j<=arr[i];j++)
		{
			if(j%3==0 && j%5==0)
			printf("FizzBuzz\n");
			else if(j%3==0)
			printf("Fizz\n");
			else if(j%5==0)
			printf("Buzz\n");
			else
			{
			printf("%d\n",j);}
		}
		
	}  
	
}


