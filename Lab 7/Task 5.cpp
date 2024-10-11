#include <stdio.h>
int main(){
	int n;
	printf("Enter the length of array \n");
	scanf("%d",&n);
	int a[n];	
	for (int i=0;i<n;i++){
			printf("Enter the number:\n");
	        scanf("%d",&a[i]);
	}
	for(int j=n-1;j>=0;j--){
		printf("%d ",a[j]);
	}
	return 0;
}
