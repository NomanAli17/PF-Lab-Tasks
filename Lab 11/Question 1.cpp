#include <stdio.h>
 struct Rectangle {
    float length;
    float width;
};

int check(Rectangle r) {
    if (r.length > 0.0 && r.length < 20.0 && r.width > 0.0 && r.width < 20.0) {
        return 1; 
    } else {
        return 0;
    }
}

float perimeter(Rectangle r) {
    return 2 * (r.length + r.width);
}

float area(Rectangle r) {
    return r.length * r.width;
}

int main() {
    Rectangle r;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &r.length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &r.width);

    if (check(r)) {
        printf("Perimeter: %.2f\n", perimeter(r));
        printf("Area: %.2f\n", area(r));
    } else {
        printf("Invalid dimensions! Length and width must be greater than 0 and less than 20.\n");
    }
    return 0;
}
