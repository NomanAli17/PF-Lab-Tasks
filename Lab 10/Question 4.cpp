#include <stdio.h>

struct packages {
    char name[5];
    char destination[5][100];
    int duration[5];
    int seats[5];
    int cost[5];
};

int main() {
    struct packages s1 = {
        {'P', 'Q', 'R', 'S', 'T'},  
        {"Italy", "France", "Germany", "Spain", "Portugal"},  
        {7, 10, 14, 5, 8},  
        {30, 25, 20, 15, 18},  
        {5, 6, 7, 4, 5}  
    };

    char terminate = 'c';
    
    while (terminate != 'n') {
        printf("Enter 'n' to quit and any other key to continue: ");
        scanf(" %c", &terminate); 
        if (terminate == 'n') {
            break;
        }
        printf("Book your trip\n");
        printf("Available packages\n");
        
        for (int index = 0; index < 5; index++) {
            printf("Package Name: %c, Country: %s, Duration in days: %d, Number of seats available: %d, Cost: %d million\n",
                   s1.name[index], s1.destination[index], s1.duration[index], s1.seats[index], s1.cost[index]);
        }
        printf("---------------------Booking process----------------\n");
        printf("Enter the package name: ");
        
        char package_name;
        scanf(" %c", &package_name); 
        for (int i = 0; i < 5; i++) {
            if (package_name == s1.name[i]) {
                if (s1.seats[i] > 0) {
                    s1.seats[i]--; 
                    printf("Booking successful! Seats left: %d\n", s1.seats[i]);
                } else {
                    printf("Sorry, no seats available for package %c.\n", package_name);
                }
                break; 
            }
        }
    }
    return 0;
}

