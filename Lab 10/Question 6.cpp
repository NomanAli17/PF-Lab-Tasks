#include <stdio.h>
#include <string.h>
int changeword(char string[],int a){
	int b=a;
	printf("%c",string[b]);
	if(b==0){
		return 0;
	}
	changeword(string,b-1);
}
int main(){
	char string[100];
    scanf("%[^\n]",&string);
	int a=strlen(string)-1;
	changeword(string,a);
	return 0;
}
