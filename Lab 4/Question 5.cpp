#include <stdio.h>

int main() {
    int time;

    printf("Enter the time of the day (0-23): ");
    scanf("%d", &time);

    if (time < 0 || time > 23) {
        printf("Invalid time.\n");
    }

    if (time >= 6 && time < 12) {
        printf("Good Morning\n");
    }
	else if (time >= 12 && time < 18) {
        printf("Good Afternoon\n");
    }
	else if (time >= 18 && time < 24) {
        printf("Good Evening\n");
    } 
	else {
        printf("Good Night\n");
    }

    return 0;
}

