#include<iostream>
using namespace std;
 /*int main()
{
	int i=5;
	int &j=i;
	int p=10;
	j=p;
	cout<<i<<endl<<j<<endl;
	p=20;
	cout<<i<<endl<<j<<endl;
	return 0;
}*/

/*int main()
{
	char *p="hello";
	char *q=p;
	cout<<p<<endl<<q<<endl;
	q="Good Bye";
	cout<<p<<endl<<q<<endl;
	return 0;
}*/

/*int i=20;
int main()
{
	int i=5;
	cout<<i<<endl<<::i<<endl;
	{
		int i=10;
		cout<<i<<endl<<::i<<endl;
	}
	return 0;
}*/
/*
const int i=10;
int main()
{
	const int i=20;
	cout<<i<<endl<<::i<<endl;
	cout<<&i<<endl<<::i<<endl;
	return 0;
}*/

int main()
{
	int i;
	cout<<sizeof(i)<<endl<<sizeof('i')<<endl;
	return 0;
}


