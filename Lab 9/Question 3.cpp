#include <stdio.h>
#include <string.h>
int main(){
	const char *username1="admin";
	const char *password1= "1234";
	char username2[10];
	char password2[10];
	int found;
    printf("Enter Username: ");
    scanf("%s",&username2);
    printf("Enter Password: ");
    scanf("%s",&password2);
    if((strcmp(username1,username2)==0) && (strcmp(password1,password2)==0)){
    	found=1;
	}else{
		found=0;
	}
	if(found){
		printf("Access granted");
	}else{
		printf("Access denied");
	}
	return 0;
}
