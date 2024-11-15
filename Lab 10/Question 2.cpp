#include <stdio.h>
int percentage(int n,int a){
	float b=(a/100.0)*n;
	if(a>100){
		return 0;
	}
	printf("%d Percent =  %f\n",a,b);
	percentage(n,a+1);
}

int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	int a=1;
	percentage(n,a);
	return 0;
}
