#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("document.txt", "r");
    
    if (file == NULL) {
        printf("Error: Could not open the file '%s'.\n");
    }
    char line[1024]; 
    int line_number = 1;
    while (fgets(line, sizeof(line), file)) {
        printf("%d: %s", line_number++, line);
    }
    fclose(file);
    return 0;
}
