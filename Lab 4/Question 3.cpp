#include <stdio.h>

int main() {
    float price, discount, amount_saved, price_after_discount;

    printf("Enter the price of the items: \n");
    scanf("%f", &price);

    if (price < 1500) {
        discount = 0.07;
    } 
	else if (price >= 1500 && price <= 3000) {
        discount = 0.12;
    }
	else if (price > 3000 && price <= 5000) {
        discount = 0.22;
    } 
	else {
        discount = 0.30;
    }
    
    amount_saved = discount * price;
    price_after_discount = price - amount_saved;

    printf("Original Price: %.1f\n", price);
    printf("Amount Saved: %.1f\n", amount_saved);
    printf("Price After Discount: %.1f\n", price_after_discount);

    return 0;
}

