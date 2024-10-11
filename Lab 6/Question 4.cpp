#include <stdio.h>
int main(){
	int n;
	int sum=0;
	printf("Input a Number. \n");
	scanf("%d",&n);
	sum=sum+n;
	while(n!=0){
		printf("Innput a Number. \n");
	    scanf("%d",&n);
	    sum=sum+n;
	}
	printf("The sum is %d \n",sum);
	return 0;
}