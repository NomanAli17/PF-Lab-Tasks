#include <stdio.h>
int main(){
	int n;
	printf("Input the Number. \n");
	scanf("%d",&n);
	if (n>=1){
		while(n>1){
			if(n%2==0){
				printf("%d\n",n);
			}
	       	n=n-1;
		}
	}else{
		printf("The number is not valid");
	}
	return 0;
}
