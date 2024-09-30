#include <stdio.h>

int main(){
	int a;
	int b;
	printf("Print First Number \n");
	scanf("%d", &a);
	printf("Print Second Number \n");
	scanf("%d", &b);
	
	if(a>b){
		if(a>100){
			printf("First Number is Significantly larger");
		}
		else {
			printf("First Number is larger");
		}
	}
	else if (a<b){
		if(a<0){
			printf("First number is negative and smaller");
		}
		else 
		printf("First Number is Smaller");
	}
	return 0;
}
