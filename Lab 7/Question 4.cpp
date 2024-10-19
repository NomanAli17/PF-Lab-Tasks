#include <stdio.h>
int main(){
	int n;
	int sum=0;
	printf("Enter the length of array \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the numbers:\n");
	for (int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++){
		sum=sum+a[j];
	}
	printf("The sum is %d",sum);
	return 0;
}