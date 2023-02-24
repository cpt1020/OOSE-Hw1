#include <string>
#include <vector>
#include <iostream>
#include "Bus.h"
#include "Booking.h"
#include "Passenger.h"
using namespace std;

int main(){

    // create a Booking object
    Booking booking;

    // create a Bus object that departs in the morning 
    booking.createBus("morning");
    // create a Bus object that departs in the evening 
    booking.createBus("evening");

    // create 5 Passenger objects with the names of David, Lisa, Amanda, John, and Joe, respectively
    booking.createPassenger("David");
    booking.createPassenger("Lisa");
    booking.createPassenger("Amanda");
    booking.createPassenger("John");
    booking.createPassenger("Joe");

    // Passengers book buses
    booking.passengerBooksBus("David", "morning");
    booking.passengerBooksBus("David", "evening");
    booking.passengerBooksBus("Lisa", "evening");
    booking.passengerBooksBus("Amanda", "morning");
    booking.passengerBooksBus("Amanda", "evening");
    booking.passengerBooksBus("John", "morning");

    // print the bus booking info of each passenger
    cout << "\n===== Print the bus-booking info of passenger =====\n" << endl;
    booking.printPassengerBus("David");
    booking.printPassengerBus("Lisa");
    booking.printPassengerBus("Amanda");
    booking.printPassengerBus("John");
    booking.printPassengerBus("Joe");
    booking.printPassengerBus("Lily");
    // Note: there's no registered passenger called Lily

    // print the passengers of each bus
    cout << "===== Print the passengers of each bus =====\n" << endl;
    booking.printBusPassenger("morning");
    booking.printBusPassenger("evening");

    // print the passengers who booked both buses
    cout << "===== Print the passengers who booked both buses =====\n" << endl;
    booking.printPassengerBookBothBus();

    return 0;
}