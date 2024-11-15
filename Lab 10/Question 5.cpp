#include <stdio.h>
int digitsum(int n){
	if(n==0){
		return 0;
	}
	return(n%10)+digitsum(n/10);
}
int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	int result=digitsum(n);
	printf("The sum of digits is %d",result);
	return 0;
}
