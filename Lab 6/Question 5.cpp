#include<stdio.h>
int main(){
	int prime = 0;
	int n;
	printf("Enter the number:"); scanf("%d",&n);
	if(n == 0 || n == 1){
		printf("Not prime");	
	}else if(n == 2){
		printf("Prime");	
	}else if(n > 2){
		for(int i = 2; i < n; i++){
			if(n%i == 0){
				prime = 0;
				break;
			}
			else{
				prime = 1;
			}
		}
		if(prime == 1){
			printf("Prime");
		}else{
			printf("Not Prime");
		}
	}else if(n < 0){
		printf("Invalid input");
	}
	return 0;
}