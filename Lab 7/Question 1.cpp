#include<stdio.h>

int main(){
    int arr[10]={1,2,5,4,6,8,3,9,7,0};
    int Num;
    printf("Enter Integer To Serch: ");
    scanf("%d",&Num);
    for (int i = 0; i <10 ; i++)
    {
     if (arr[i]==Num)
     {
        printf("%d found at %d index",Num,i+1);
        break;
     }
     if(i==9){
        printf("Number Not Found");
        break;
     }
    }
    return 0;
}