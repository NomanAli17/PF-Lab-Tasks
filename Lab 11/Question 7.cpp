#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "books.txt"

typedef struct {
    char id[20];
    char title[50];
    char author[50];
    int quantity;
    float price;
} Book;

void addBook();
void viewBooks();
void searchBook();
void updateBook();
void deleteBook();
void calculateInventoryValue();
int isDuplicateID(const char *id);

void menu() {
    int choice;
    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. View All Books\n");
        printf("3. Search Book\n");
        printf("4. Update Book Details\n");
        printf("5. Delete Book\n");
        printf("6. Calculate Total Inventory Value\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                viewBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                updateBook();
                break;
            case 5:
                deleteBook();
                break;
            case 6:
                calculateInventoryValue();
                break;
            case 0:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
}

void addBook() {
    FILE *file = fopen(FILE_NAME, "a");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    Book book;
    printf("Enter Book ID: ");
    scanf(" %s", book.id);

    if (isDuplicateID(book.id)) {
        printf("Book with ID %s already exists. Try again.\n", book.id);
        fclose(file);
        return;
    }

    printf("Enter Title: ");
    scanf(" %[^\n]", book.title);
    printf("Enter Author: ");
    scanf(" %[^\n]", book.author);
    printf("Enter Quantity: ");
    scanf("%d", &book.quantity);
    printf("Enter Price: ");
    scanf("%f", &book.price);

    if (book.quantity < 0 || book.price < 0) {
        printf("Quantity and Price cannot be negative. Try again.\n");
        fclose(file);
        return;
    }

    fprintf(file, "%s|%s|%s|%d|%.2f\n", book.id, book.title, book.author, book.quantity, book.price);
    printf("Book added successfully.\n");

    fclose(file);
}

void viewBooks() {
    FILE *file = fopen(FILE_NAME, "r");
    if (!file) {
        printf("No records found.\n");
        return;
    }

    Book book;
    printf("\n%-10s %-30s %-20s %-10s %-10s\n", "Book ID", "Title", "Author", "Quantity", "Price");
    printf("---------------------------------------------------------------------------\n");
    while (fscanf(file, "%[^|]|%[^|]|%[^|]|%d|%f\n", book.id, book.title, book.author, &book.quantity, &book.price) != EOF) {
        printf("%-10s %-30s %-20s %-10d %-10.2f\n", book.id, book.title, book.author, book.quantity, book.price);
    }

    fclose(file);
}

void searchBook() {
    FILE *file = fopen(FILE_NAME, "r");
    if (!file) {
        printf("No records found.\n");
        return;
    }

    char query[50];
    printf("Enter Book ID or Title to search: ");
    scanf(" %[^\n]", query);

    Book book;
    int found = 0;
    while (fscanf(file, "%[^|]|%[^|]|%[^|]|%d|%f\n", book.id, book.title, book.author, &book.quantity, &book.price) != EOF) {
        if (strcmp(book.id, query) == 0 || strcasecmp(book.title, query) == 0) {
            printf("\nBook Found:\n");
            printf("ID: %s\nTitle: %s\nAuthor: %s\nQuantity: %d\nPrice: %.2f\n", book.id, book.title, book.author, book.quantity, book.price);
            found = 1;
            break;
        }
    }

    if (!found) printf("No book found with ID or Title: %s\n", query);

    fclose(file);
}

void updateBook() {
    FILE *file = fopen(FILE_NAME, "r");
    if (!file) {
        printf("No records found.\n");
        return;
    }

    FILE *tempFile = fopen("temp.txt", "w");
    if (!tempFile) {
        printf("Error creating temporary file.\n");
        fclose(file);
        return;
    }

    char query[20];
    printf("Enter Book ID to update: ");
    scanf(" %s", query);

    Book book;
    int found = 0;
    while (fscanf(file, "%[^|]|%[^|]|%[^|]|%d|%f\n", book.id, book.title, book.author, &book.quantity, &book.price) != EOF) {
        if (strcmp(book.id, query) == 0) {
            found = 1;
            printf("Enter new Quantity: ");
            scanf("%d", &book.quantity);
            printf("Enter new Price: ");
            scanf("%f", &book.price);
        }
        fprintf(tempFile, "%s|%s|%s|%d|%.2f\n", book.id, book.title, book.author, book.quantity, book.price);
    }

    fclose(file);
    fclose(tempFile);

    if (found) {
        remove(FILE_NAME);
        rename("temp.txt", FILE_NAME);
        printf("Book details updated successfully.\n");
    } else {
        remove("temp.txt");
        printf("No book found with ID: %s\n", query);
    }
}

void deleteBook() {
    FILE *file = fopen(FILE_NAME, "r");
    if (!file) {
        printf("No records found.\n");
        return;
    }

    FILE *tempFile = fopen("temp.txt", "w");
    if (!tempFile) {
        printf("Error creating temporary file.\n");
        fclose(file);
        return;
    }

    char query[20];
    printf("Enter Book ID to delete: ");
    scanf(" %s", query);

    Book book;
    int found = 0;
    while (fscanf(file, "%[^|]|%[^|]|%[^|]|%d|%f\n", book.id, book.title, book.author, &book.quantity, &book.price) != EOF) {
        if (strcmp(book.id, query) != 0) {
            fprintf(tempFile, "%s|%s|%s|%d|%.2f\n", book.id, book.title, book.author, book.quantity, book.price);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    if (found) {
        remove(FILE_NAME);
        rename("temp.txt", FILE_NAME);
        printf("Book deleted successfully.\n");
    } else {
        remove("temp.txt");
        printf("No book found with ID: %s\n", query);
    }
}

void calculateInventoryValue() {
    FILE *file = fopen(FILE_NAME, "r");
    if (!file) {
        printf("No records found.\n");
        return;
    }

    Book book;
    float totalValue = 0;
    while (fscanf(file, "%[^|]|%[^|]|%[^|]|%d|%f\n", book.id, book.title, book.author, &book.quantity, &book.price) != EOF) {
        totalValue += book.quantity * book.price;
    }

    printf("Total Inventory Value: %.2f\n", totalValue);

    fclose(file);
}

int isDuplicateID(const char *id) {
    FILE *file = fopen(FILE_NAME, "r");
    if (!file) return 0;

    Book book;
    while (fscanf(file, "%[^|]|%[^|]|%[^|]|%d|%f\n", book.id, book.title, book.author, &book.quantity, &book.price) != EOF) {
        if (strcmp(book.id, id) == 0) {
            fclose(file);
            return 1;
        }
    }

    fclose(file);
    return 0;
}

int main() {
    menu();
    return 0;
}


