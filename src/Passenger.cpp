#include "Passenger.h"
#include <iostream>
#include <string>
using namespace std;

Passenger::Passenger(string nameVal){
    name = nameVal;
}

string Passenger::getName() const {
    return name;
}

void Passenger::setName(string nameVal){
    name = nameVal;
}

void Passenger::bookBus(string busDeparture){
    bookingList.push_back(busDeparture);
}

void Passenger::printBookedBus(){
    // if the passenger has booking of bus
    if (bookingList.size() != 0){
        cout << name << " has booked the following bus:" << endl;
        for (auto bus : bookingList){
            cout << bus << " ";
        }
        cout << endl;
    }
    // the passenger hasn't booked any bus
    else{
        cout << name << " currently has no booking" << endl;
    }
}