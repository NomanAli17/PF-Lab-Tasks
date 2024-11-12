#include <stdio.h>
#include <string.h>
int main(){
	char names[5][10]={"Alice","Harry","Charlie","Diana","Eve"};
	char key[10];
	int found=0;
    printf("Enter a Name : ");
    scanf("%s",&key);
    for(int i=0;i<5;i++){
    	if(strcmp(names[i],key)==0){
    	     found=1;
		}
	}
	if(found){
		printf("Found");
	}else{
		printf("Not Found");
	}
	return 0;
}
