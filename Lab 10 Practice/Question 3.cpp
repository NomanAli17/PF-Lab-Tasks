#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct library {
    char bookTitles[5][100];
    char bookAuthors[5][100];
    int bookISBNs[5];
    int bookPublicationYears[5];
    bool bookStatus[5]; 
};

struct library lib1;

void addBookToLibrary(char title[100], int idx, char author[100], int ISBN, int publicationYear) {
    strcpy(lib1.bookTitles[idx], title);
    strcpy(lib1.bookAuthors[idx], author);
    lib1.bookISBNs[idx] = ISBN;
    lib1.bookPublicationYears[idx] = publicationYear;
    lib1.bookStatus[idx] = true; 
}

void checkBookAvailability(char title[100], char author[100]) {
    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (strcmp(lib1.bookTitles[i], title) == 0 || strcmp(lib1.bookAuthors[i], author) == 0) {
            printf("Book '%s' by '%s' is available at index %d\n", lib1.bookTitles[i], lib1.bookAuthors[i], i);
            found = true;
            break;
        }
    }
    
    if (!found) {
        printf("Sorry, the requested book is not available.\n");
    }
}

int main() {
    addBookToLibrary("The Pragmatic Programmer", 0, "Andrew Hunt", 112233445, 1999);
    addBookToLibrary("Clean Code", 1, "Robert C. Martin", 223344556, 2008);
    addBookToLibrary("Design Patterns", 2, "Erich Gamma", 334455667, 1994);
    
    checkBookAvailability("Clean Code", "Robert C. Martin");
    checkBookAvailability("The Clean Coder", "Robert C. Martin");
    
    return 0;
}

