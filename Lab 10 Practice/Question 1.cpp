#include <stdio.h>
void calc(int n,int w,int sum){
	sum=sum+w;
    if(n==1){
    	printf("Sum is %d",sum);
	}
	calc(n-1,w,sum);
    }
int main(){
	int n,w;
	printf("Enter the Number of Boxes : ");
	scanf("%d",&n);
	printf("Enter the fixed weight : ");
	scanf("%d",&w);
	int sum=0;
	calc(n,w,sum);
	return 0;
}