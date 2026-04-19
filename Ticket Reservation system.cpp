#include <iostream>

using namespace std;

int MAX_EVENTS = 3;
int MAX_SEATS = 100;
int eventSeats[] = {50, 30, 100};
bool seats[3][100]; // Seats availability array
char eventNames[3][20] = {"Concert", "Theater", "Sports Event"};

void initializeSeats() {
    for (int i = 0; i < MAX_EVENTS; i++) {
        for (int j = 0; j < eventSeats[i]; j++) {
            seats[i][j] = false;  // Initialize all seats to available (false)
        }
    }
}

void showMenu() {
    cout << "\nWelcome to the Ticket Reservation System!\n";
    cout << "1. View Events\n";
    cout << "2. Reserve Ticket\n";
    cout << "3. Cancel Reservation\n";
    cout << "4. View Seating Chart\n";
    cout << "5. Exit\n";
    cout << "Select an option: ";
}

void viewEvents() {
    cout << "Available Events:\n";
    for (int i = 0; i < MAX_EVENTS; i++) {
        int availableSeats = 0;
        for (int j = 0; j < eventSeats[i]; j++) {
            if (!seats[i][j]) availableSeats++;
        }
        cout << i + 1 << ". " << eventNames[i] << " - " << availableSeats << " seats available\n";
    }
}

void reserveTicket() {
    int eventNumber, numTickets;
    cout << "Enter event number to reserve tickets for: ";
    cin >> eventNumber;
    cout << "Enter number of tickets to reserve: ";
    cin >> numTickets;

    if (eventNumber < 1 || eventNumber > MAX_EVENTS || numTickets < 1 || numTickets > eventSeats[eventNumber - 1]) {
        cout << "Invalid input or not enough seats available.\n";
        return;
    }
    eventNumber--; // Adjust for zero-based index

    int reserved = 0;
    for (int i = 0; i < eventSeats[eventNumber] && reserved < numTickets; i++) {
        if (!seats[eventNumber][i]) {
            seats[eventNumber][i] = true;
            reserved++;
        }
    }

    if (reserved == numTickets) {
        cout << "Successfully reserved " << numTickets << " tickets for " << eventNames[eventNumber] << ".\n";
    } else {
        cout << "Not enough seats available.\n";
    }
}

void cancelReservation() {
    int eventNumber, seatNumber;
    cout << "Enter event number for cancellation: ";
    cin >> eventNumber;
    cout << "Enter seat number to cancel: ";
    cin >> seatNumber;

    if (eventNumber < 1 || eventNumber > MAX_EVENTS || seatNumber < 1 || seatNumber > eventSeats[eventNumber - 1] || !seats[eventNumber - 1][seatNumber - 1]) {
        cout << "Invalid event or seat number, or no reservation found.\n";
        return;
    }
    eventNumber--; // Adjust for zero-based index

    seats[eventNumber][seatNumber - 1] = false;
    cout << "Reservation cancelled successfully for seat " << seatNumber << " in " << eventNames[eventNumber] << ".\n";
}

void viewSeatingChart() {
    int eventNumber;
    cout << "Enter event number to view seating chart: ";
    cin >> eventNumber;

    if (eventNumber < 1 || eventNumber > MAX_EVENTS) {
        cout << "Invalid event number.\n";
        return;
    }
    eventNumber--; // Adjust for zero-based index

    cout << "Seating Chart for " << eventNames[eventNumber] << ":\n";
    for (int i = 0; i < eventSeats[eventNumber]; i++) {
        cout << (seats[eventNumber][i] ? "X" : "_");
        if ((i + 1) % 10 == 0) cout << "\n";
    }
    cout << "\n";
}

int main() {
    initializeSeats();
    int choice;
    do {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                viewEvents();
                break;
            case 2:
                reserveTicket();
                break;
            case 3:
                cancelReservation();
                break;
            case 4:
                viewSeatingChart();
                break;
            case 5:
                cout << "Exiting system.\n";
                break;
            default:
                cout << "Please enter a valid option.\n";
        }
    } while (choice != 5);

    return 0;
}
