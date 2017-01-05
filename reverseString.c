#include"stdio.h"
#include <stdlib.h>
#include <string.h>

char* reverseString(char* s) {
    static char* temp=NULL;
	int strl=0,i=0,j=0;
	strl=strlen(s);
	temp = (char*)malloc(strl*sizeof(char)+1);	
	for(j=strl-1;j>=0;j--){
		*(temp+i)=*(s+j);
		i++;	
	}
	*(temp+strl)=*(s+strl);
	return temp;
}

/**************for local test**************/
int main(void)  
{  
	char teststr[10]="hello";
	char* tp=NULL;
	tp = reverseString(teststr);
	printf("%s",tp);

}  














































