#include <stdio.h>
int main(){
	int array [3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Enter Element A%d%d: ",i+1,j+1);
			scanf("%d",&array[i][j]);
		}
	}
	for(int i=0; i<3; i++){	
		for(int j=0; j<3; j++){
			printf(" %d ",array[i][j]);
		}
		printf("\n");
	}
	int sum_rows[3];
	int sum_columns[3];
	
	for(int i=0;i<3;i++){
		int sum=0;
		for(int j=0;j<3;j++){
			sum=sum+array[i][j];
		}
		sum_rows[i]=sum;
	}
	for(int i=0;i<3;i++){
		printf("sum of row %d is %d\n",i+1,sum_rows[i]);
	}
		
	for(int j=0;j<3;j++){
		int sum=0;
		for(int i=0;i<3;i++){
			sum=sum+array[i][j];
		}
		sum_columns[j]=sum;
	}
	for(int i=0;i<3;i++){
		printf("sum of column %d is %d\n",i+1,sum_columns[i]);
	}
	return 0;
}

