#include <stdio.h>
void printArray(int arr[], int a) {
    if (a==0){
        return;
    }
    printf("%d ",arr[0]);
    printArray(arr+1,a-1);
}
int main() {
	int a;
    printf("Size of Array : ");
	scanf("%d",&a);
	int arr[a];
	printf("Enter the Elements : \n");
	for(int i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
    printArray(arr,a);
    return 0;
}

