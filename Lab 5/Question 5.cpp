#include <stdio.h>

int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    if(a & 1){
        printf("odd");
    }else{
        printf("even");
    }
    return 0;
}
