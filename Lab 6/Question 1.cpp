#include <stdio.h>
int main(){
	int n;
	int factorial=1;
	printf("Input the Number. \n");
	scanf("%d",&n);
	if(n<0){
		printf("Factiorial does not exist");
	}else{
	for(int i=1;i<=n;i++){
		factorial=factorial*i;
	}		
	printf("The factorial is %d",factorial);
	}
	return 0;
}
