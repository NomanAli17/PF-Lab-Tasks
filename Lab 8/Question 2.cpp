#include <stdio.h>
int main(){
	int array [4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Enter Element A%d%d: ",i+1,j+1);
			scanf("%d",&array[i][j]);
		}
	}
	for(int i=0; i<4; i++){	
		for(int j=0; j<4; j++){
			printf(" %d ",array[i][j]);
		}
		printf("\n");
	}
	for(int i=0; i<4; i++){	
		for(int j=0; j<4; j++){
		if(array[i][j]<0){
			array[i][j]=0;
		}
	  }
   }
   printf("New Matrix: \n");
	for(int i=0; i<4; i++){	
		for(int j=0; j<4; j++){
			printf(" %d ",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}

