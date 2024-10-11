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
	int maximum=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>maximum){
			maximum=a[i];
		}
	}
	int minimum=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<minimum){
			minimum=a[i];
		}
	}
	printf("Maximum is %d \n",maximum);
	printf("Minimum is %d \n",minimum);
return 0;
}
