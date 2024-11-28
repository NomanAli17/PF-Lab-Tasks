
#include <stdio.h>
struct phone {
    int area_code;
    int exchange;
    int number;
};

int main() {
    struct phone myNumber = {212, 767, 8900}; 
    struct phone yourNumber;  
    printf("Enter area code: ");
    scanf("%d", &yourNumber.area_code);

    printf("Enter exchange: ");
    scanf("%d", &yourNumber.exchange);
    printf("Enter number: ");
    scanf("%d", &yourNumber.number);
    printf("My number is (%d) %d-%d\n", myNumber.area_code, myNumber.exchange, myNumber.number);
    printf("Your number is (%d) %d-%d\n", yourNumber.area_code, yourNumber.exchange, yourNumber.number);

    return 0;
}

