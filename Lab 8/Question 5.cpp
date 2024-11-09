#include <stdio.h>
int main(){
	int arr[4][4];
	printf("Enter Scores \n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Enter Element A%d%d : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<4;i++){
		printf("|");
		for(int j=0;j<4;j++){
			printf(" %d ",arr[i][j]);
		}
		printf("|\n");
	}
	for(int k=0;k<4;k++){
		int temp=0;
	    for(int i=0;i<3;i++){
		    for(int j=i+1;j<4;j++){
			    if(arr[i][k]>arr[j][k]){
			    	temp=arr[i][k];
			    	arr[i][k]=arr[j][k];
			    	arr[j][k]=temp;
				}
		    }
	    }
    }
    printf("Revised Matrix : \n");
	for(int i=0;i<4;i++){
		printf("|");
		for(int j=0;j<4;j++){
			printf(" %d ",arr[i][j]);
		}
		printf("|\n");
	}  
	return 0;
}
