/**#include <stdio.h>

int main(){
	char num[9];
	for(int i=0;i<9;i++)
	scanf("%d", &num[i]);              	                 
	
	     if((num[0]+num[1])%2==0 && (num[3]+num[4])%2==0 && (num[4]+num[5])%2==0 && (num[8]+num[9])%2==0)
		 printf("valid");
		 else
		 printf("invalid");
}**/
#include <stdio.h>

int main(){
	char num[9];
	for(int i=0;i<9;i++)
	scanf("%d", &num[i]);              	                 
	
	     if((num[0]+num[1])%2==0 && (num[3]+num[4])%2==0 && (num[4]+num[5])%2==0 && (num[8]+num[9])%2==0)
		 printf("invalid");
		 else if(num[2]==('A'||'I'||'E'||'O'||'U'||'Y'))
		 printf("invalid");
		 else
		 printf("valid");
}

