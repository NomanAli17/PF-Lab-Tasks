#include <stdio.h>

struct Flight {
    int flightNumber;
    char departureCity[100];
    char arrivalCity[100];
    int departureTime;
    int arrivalTime;
    int availableSeats;
};

int main() {
    struct Flight flights[3];
    int flightCount = 3;

    for (int i = 0; i < flightCount; i++) {
        printf("Flight %d details:\n", i + 1);
        printf("Enter flight number: "); scanf("%d", &flights[i].flightNumber);
        printf("Departure city: "); scanf("%s", flights[i].departureCity);
        printf("Arrival city: "); scanf("%s", flights[i].arrivalCity);
        printf("Departure time: "); scanf("%d", &flights[i].departureTime);
        printf("Arrival time: "); scanf("%d", &flights[i].arrivalTime);
        printf("Available seats: "); scanf("%d", &flights[i].availableSeats);
    }

    int option = 1;
    while (option != 0) {
        printf("\nAvailable Flights:\n");
        printf("Flight No\tDeparture\tArrival\tSeats\n");
        for (int i = 0; i < flightCount; i++) {
            printf("%d\t\t%s\t\t%s\t\t%d\n", flights[i].flightNumber, flights[i].departureCity, flights[i].arrivalCity, flights[i].availableSeats);
        }

        int flightNo;
        printf("Enter flight number to book a seat: ");
        scanf("%d", &flightNo);

        int booked = 0;
        for (int i = 0; i < flightCount; i++) {
            if (flights[i].flightNumber == flightNo) {
                if (flights[i].availableSeats > 0) {
                    flights[i].availableSeats--;
                    printf("Seat booked on flight %d. Seats left: %d\n", flightNo, flights[i].availableSeats);
                } else {
                    printf("No seats available on flight %d.\n", flightNo);
                }
                booked = 1;
                break;
            }
        }

        if (!booked) {
            printf("Flight number %d not found.\n", flightNo);
        }

        printf("Enter 0 to exit, 1 to continue: ");
        scanf("%d", &option);
    }

    return 0;
}

