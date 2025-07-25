#include<iostream>
using namespace std;
void xstrcpy(char*,char*);
int main()
{
	char str1[]="Nagpur";
	char str2[10];
	xstrcpy(str2,str1);
	cout<<str1<<endl<<str2<<endl;
	return 0;
}

void xstrcpy(char *t,const char* s)
{
	while(*s!='\0')
	{
		*t=*s;
		t++;
		s++;
	}
	*t='\0';
	//s=s-6; if s was not const this change was possible
	//*s="K";
}
