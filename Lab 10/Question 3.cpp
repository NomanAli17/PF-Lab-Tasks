#include <stdio.h>
struct car {
    char make[100];
    char model[100];
    float price;
    float mileage;
    int year;
};

int main() {
    struct car cars[100];
    int index = 0;
    char operation;
    while (1) {
        printf("Enter 'n' to add a new record, 'p' to print a record, 'q' to quit: ");
        scanf(" %c", &operation);

        if (operation == 'n') {
            printf("Make: "); scanf("%s", cars[index].make);
            printf("Model: "); scanf("%s", cars[index].model);
            printf("Price: "); scanf("%f", &cars[index].price);
            printf("Mileage: "); scanf("%f", &cars[index].mileage);
            printf("Year: "); scanf("%d", &cars[index].year);
            index++;
        } else if (operation == 'p') {
            int record_index;
            printf("Enter index to view record: ");
            scanf("%d", &record_index);
            if (record_index >= 0 && record_index < index) {
                printf("Make: %s, Model: %s, Price: %.2f, Mileage: %.2f, Year: %d\n", 
                       cars[record_index].make, cars[record_index].model, 
                       cars[record_index].price, cars[record_index].mileage, 
                       cars[record_index].year);
            } else {
                printf("Invalid index\n");
            }
        } else if (operation == 'q') {
            break;
        } else {
            printf("Invalid input\n");
        }
    }
    return 0;
}

