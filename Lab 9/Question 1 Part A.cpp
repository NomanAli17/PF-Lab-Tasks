#include<stdio.h>
int print(int n){
		for(int i=n+1;i>0;i--){
		for(int j=0;j<=n+1;j++){
			if(j<i){
				printf("- ");
			}else{
				printf("o");
			}
		}
		printf("\n");
	}
	for(int i=0;i<n+1;i++){
		if(i==0){
			continue;
		}else{
		for(int j=0;j<=n+1;j++){
			if(j<=i){
				printf("- ");
			}else{
				printf("o");
			}
		}
	}
		printf("\n");
	}
}

int main(){
	int n;
	printf("Enter Number of Rows : ");
	scanf("%d",&n);
    print(n);
	return 0;
}
