#ifndef BOOKING_H
#define BOOKING_H
#include <vector>
#include <string>
#include "Bus.h"
#include "Passenger.h"
using namespace std;

// this class the booking system,
// which serves as the interface for passenger to book bus ticket
class Booking{

private:
    vector<Bus> busList;                
    // record how many Bus objects have been created

    vector<Passenger> passengerList;    
    // record how many Passenger objects have been created
    
public:

    // how many buses currently are there
    int totalBusNum() const;

    // creat a new Bus object
    void createBus(string departureVal);

    // create a new Passenger object
    void createPassenger(string nameVal);

    // passenger books a bus
    void passengerBooksBus(string passengerName, string busDeparture);

    // print passenger's bus
    void printPassengerBus(string passengerName);

    // // print those passengers who book 2 buses
    void printPassengerBookBothBus();

    // print bus's passenger
    void printBusPassenger(string departure);
};

#endif