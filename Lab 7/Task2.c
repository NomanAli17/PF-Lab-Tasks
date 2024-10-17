#include<stdio.h>

int main(){
    int arr1[10],arr2[10];
    printf("Enter Numbers ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (i==9)
        {
            arr2[i]=arr1[0];
            break;
        }
        
        arr2[i]=arr1[i+1];
    }
    printf("Before={%d,%d,%d,%d,%d,%d,%d,%d,%d,%d}",arr1[0],arr1[1],arr1[2],arr1[3],arr1[4],arr1[5],arr1[6],arr1[7],arr1[8],arr1[9]);
 
    printf("After={%d,%d,%d,%d,%d,%d,%d,%d,%d,%d}",arr2[0],arr2[1],arr2[2],arr2[3],arr2[4],arr2[5],arr2[6],arr2[7],arr2[8],arr2[9]);
}