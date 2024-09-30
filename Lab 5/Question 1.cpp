#include <stdio.h>
int main()
{ 
int age;
int citizenship; 
printf("Enter your age: \n");
scanf("%d", &age);
printf("Are you a Citizen of Pakistan? \n"); 
printf("Enter 1 for Yes and 0 for No"); 
scanf("%d", &citizenship);
if(age>=18 && citizenship==1){ 
printf("you are eligibile to vote");
}else{
printf("you are not eligibile to vote"); 
}
return 0;
}

