#include <stdio.h>
 int main () 
{
float angle1, angle2, angle3; 
printf("Enter all three angles \n");
scanf("%f %f %f", &angle1, &angle2, &angle3); 
int sum=angle1+angle2+angle3;
if (angle1>0 && angle2>0 && angle3>0){ 
    if (sum==180){
      printf("These angles are of Triangles");
 }
else{
	printf("angles are negative");
    }
}
else{
	printf("These angles are not of Triangle");
}
return 0;
}

