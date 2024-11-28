#include <stdio.h>
#include <string.h>
struct Invoice {
    char partNumber[20];
    char partDescription[50];
    int quantity;
    float pricePerItem;
};
float calculateInvoiceAmount(struct Invoice *invoice) {
    if (invoice->quantity <= 0) {
        invoice->quantity = 0;
    }
    if (invoice->pricePerItem <= 0){
        invoice->pricePerItem = 0.0;
    }
    return invoice->quantity *invoice->pricePerItem;
}
int main() {
    struct Invoice invoice1 = {"A123", "Hammer", 5, 15.99};
    struct Invoice invoice2 = {"B456", "Nails", -10, -1.25}; 
    float totalAmount1 = calculateInvoiceAmount(&invoice1);
    float totalAmount2 = calculateInvoiceAmount(&invoice2);
    printf("Invoice 1:\n");
    printf("Part Number: %s\n", invoice1.partNumber);
    printf("Description: %s\n", invoice1.partDescription);
    printf("Quantity: %d\n", invoice1.quantity);
    printf("Price per Item: $%.2f\n", invoice1.pricePerItem);
    printf("Invoice Total: $%.2f\n\n", totalAmount1);
    printf("Invoice 2:\n");
    printf("Part Number: %s\n", invoice2.partNumber);
    printf("Description: %s\n", invoice2.partDescription);
    printf("Quantity: %d\n", invoice2.quantity);
    printf("Price per Item: $%.2f\n", invoice2.pricePerItem);
    printf("Invoice Total: $%.2f\n", totalAmount2);

    return 0;
}
