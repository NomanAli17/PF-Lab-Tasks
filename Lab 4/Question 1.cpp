#include <stdio.h>

int main (){
	float marks;
	printf("Input the marks. \n");
	scanf("%f", &marks);
	if (marks<0 || marks>100){
	printf("Wrong Input");
	}
 	else{
 		if (marks>=90 && marks<=100){
 			printf("Grade A");
		 }
		else if (marks>=80 && marks<=89)
		    printf("Grade B");
		else if (marks>=70 && marks<=79)
		    printf("Grade C");
		else if (marks>=60 && marks<=69)
			printf("Grade D"); 
		else
		    printf("Grade F");
	}
	return 0;
}
