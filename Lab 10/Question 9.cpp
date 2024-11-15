#include<stdio.h>
int main(){
	int max;
	printf("Enter the max number of employees : ");
	scanf("%d",&max);
	struct employee{
		int emp_id[max];
		char name[max][50];
		char department[max][50];
		float salary[max];
	};
	struct employee s1;
	for(int i = 0; i < max; i++){
		printf("em_id : "); 
		scanf("%d",&s1.emp_id[i]);
		
		printf("name : "); 
		scanf("%s",&s1.name[i]);
		printf("department :"); 
		scanf("%s",&s1.department[i]);
		
		printf("salary : "); 
		scanf("%f",&s1.salary[i]);
	}
	return 0;
}
