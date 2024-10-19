#include<stdio.h>

int main(){
    int arr1[12];
    int arr2[6];
    int b=0;
    printf("Enter Numbers ");
    for (int i = 0; i < 12; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for (int i = 0; i < 12; i+=2)
    {
        arr2[b]=arr1[i]+arr1[i+1];
        b++;
    }
     printf("Input Array={%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d}",arr1[0],arr1[1],arr1[2],arr1[3],arr1[4],arr1[5],arr1[6],arr1[7],arr1[8],arr1[9],arr1[10],arr1[11]);
 
    printf("Pair sum array={%d,%d,%d,%d,%d,%d}",arr2[0],arr2[1],arr2[2],arr2[3],arr2[4],arr2[5]);
}