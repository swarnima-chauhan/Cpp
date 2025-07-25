#include <stdio.h>

int main(){
	int i,t;
	scanf("%d",&t);
	if(t>=1 && t<=10)
	while(t!=0)
	{
		int a,b;
		scanf("%d\t%d",&a,&b);
		for(int j=a;j<=b;j++)
		{
			if(j/3==3 && j/3==5)
			printf("FizzBuzz\n");
			else if(j/3==3)
			printf("Fizz\n");
			else if(j/3==5)
			printf("Buzz\n");
			else
			{int n=j/3;
			printf("%d\n",n);}
		}
	}  
	t--; 
}



