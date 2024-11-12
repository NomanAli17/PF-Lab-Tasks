#include<stdio.h>
int print(int n){
	for(int i=1;i<=n;i++){
		int printer=1;
		for(int j=1;j<=((2*i)-1);j++){
			if(printer==0){
				break;
			}else{
			if(j<i){
				printf("%d",printer);
				printer++;
			}else if(j==i){
				printf("%d",printer);
			}else{
			    printer--;
				printf("%d",printer);
			}
			}
		}
		printf("\n");
	}
}
int main(){
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	print(n);
	return 0;
}
