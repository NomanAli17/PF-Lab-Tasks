#include <stdio.h>
int main(){
	int no_of_bolt, no_of_nut, no_of_washer, total;
	printf("Number of Bolt : ");
	scanf("%d",&no_of_bolt);
	printf("Number of Nut : ");
	scanf("%d",&no_of_nut);
	printf("Number of Washer : ");
	scanf("%d",&no_of_washer);
	if((no_of_nut>=no_of_bolt)&&(no_of_washer>=2*no_of_bolt)){
		printf("Order is OK.\n");
	}else{
		if(no_of_nut<no_of_bolt){
			printf("Check the Order: too few nuts\n");
		}else if(no_of_washer<2*no_of_bolt){
			printf("Check the Order: too few washers\n");
		}else{
			printf("Check the Order: too few nuts\n");
			printf("Check the Order: too few washers\n");
		}
	}
	total=(5*no_of_bolt)+(3*no_of_nut)+(1*no_of_washer);
	printf("Total Cost : %d",total);
	return 0;
}

