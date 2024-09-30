#include<stdio.h>

int main()
{
    int bill;
    int membership;
    printf("Do you have membership? \n");
    printf("1 for yes and 0 for no \n");
    scanf("%d",&membership);
    printf("Input your bill\n");
    scanf("%d",&bill);
    (bill>100 && membership==1)?printf("You are eligible for discount.\n"):printf("You are not eligible for discount\n");
    return 0;
}
