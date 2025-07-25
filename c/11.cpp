#include<stdio.h>
int a=3;
void n(int x){
	x=x*a;
	printf("%d",x);
}
void m(int y)
{
	a=1;
	a=y-a;
	n(a);
	printf("%d",a);
}
int main()
{
	m(a);
	return 0;
}
