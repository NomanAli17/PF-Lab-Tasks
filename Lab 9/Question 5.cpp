#include<stdio.h>
#include<string.h>
int main(){
	char text[100]; 
	printf("Enter the text to encrypt : ");
	fgets(text,100,stdin); 
	char key[100]; 
	printf("Enter the key : ");
	fgets(key,100,stdin);
	char long_key[strlen(text) + 1];
	
	int index = 0;
	for(int i = 0; i < strlen(text);i++){
		long_key[i] = key[index];
		index++;
		if(index == strlen(key) ){
			index = 0;
		}
	}
	for(int i = 0; i < strlen(text);i++){
		if(text[i] != 32){
			text[i] = text[i] - 64;
		}
		long_key[i] = long_key[i] - 64;
		int c = long_key[i] + text[i];
		c = c % 26;
		c = c + 64;
		if(key[i] == 32){
			printf(" ");
		}else{
			printf("%c",c);
		}
	}
	return 0;
}
