#include <stdio.h>
int main(){
	int m,n;
	printf("Enter Number of Rows : ");
	scanf("%d",&m);
	printf("Enter Number of Columns : ");
	scanf("%d",&n);
	int arr1[m][n];
	int arr2[m][n];
	int arr3[m][n];
	printf("Enter Element of First Matrix :\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter Element of Second Matrix :\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("First Matrix :\n");
	for(int i=0;i<m;i++){
		printf("|");
		for(int j=0;j<n;j++){
			printf(" %d ",arr1[i][j]);
		}
		printf("|\n");
	}
	printf("Second Matrix :\n");
	for(int i=0;i<m;i++){
		printf("|");
		for(int j=0;j<n;j++){
			printf(" %d ",arr2[i][j]);
		}
		printf("|\n");
	}
	printf("Result Matrix :\n");
	for(int i=0;i<m;i++){
		printf("|");
		for(int j=0;j<n;j++){
			arr3[i][j]=arr1[i][j]+arr2[i][j];
			printf(" %d ",arr3[i][j]);
		}
		printf("|\n");
	}
	return 0;
}
