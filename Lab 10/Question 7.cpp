#include <stdio.h>
void sort(int arr[],int size){
	int temp;
	if(size==1){
		return;
	}
	for(int i=0;i<size-1;i++){
		if(arr[i]>arr[i+1]){
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	sort(arr,size-1);
}
int main(){
	int size;
	printf("Size of Array : ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the Elements : \n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,size);
	printf("Sorted Array : ");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
