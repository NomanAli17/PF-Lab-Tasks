#include<stdio.h>
int main(){
	int n; printf("Entert the number: "); scanf("%d",&n);
	int sum = 0;
	int demo = n;
	while(n > 0){
		int last_digit = n%10;
		sum = sum + (last_digit*last_digit*last_digit);	
		n = n / 10;
	} 	
	if(demo == sum){
		printf("armstrong");
	}else{
		printf("Not armstrong");
	}
	return 0;
}