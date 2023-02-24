#include "Booking.h"
#include "Bus.h"
#include "Passenger.h"
#include <iostream>
#include <algorithm>
using namespace std;

int Booking::totalBusNum()const {
    return static_cast<int>(busList.size());
}

void Booking::createBus(string departureVal){
    int busNumVal {static_cast<int>(busList.size())};
    Bus bus(busNumVal, 50, departureVal);
    busList.push_back(bus);
}

void Booking::createPassenger(string nameVal){
    Passenger passenger(nameVal);
    passengerList.push_back(passenger);
}

void Booking::passengerBooksBus(string passengerName, string busDeparture){
    for (auto & passenger : passengerList){
        if (passenger.getName() == passengerName){
            for (auto & bus : busList){
                if (bus.getBusDeparture() == busDeparture){
                    passenger.bookBus(bus.getBusDeparture());
                    bus.addPassenger(passenger.getName());
                }
            }
        }
    }
}

void Booking::printPassengerBus(string passengerName){
    bool found {false};
    for (auto passenger : passengerList){
        if (passenger.getName() == passengerName){
            found = true;
            passenger.printBookedBus();
        }
    }
    if (found == false){
        cout << "There's no such passenger called " << passengerName << endl;
    }
    cout << endl;
}

void Booking::printBusPassenger(string departure){
    for (auto bus : busList){
        if (bus.getBusDeparture() == departure){
            bus.printPassenger();
        }
    }
    cout << endl;
}

void Booking::printPassengerBookBothBus(){
    vector<string> result;

    for (int i {0}; i < 2; ++i){
        if (i == 0){
            // copy the passengerList of the first bus to vector<string>result
            result = busList.at(i).getPassengerList();
        }
        else{
            vector<string> tmp;
            // copy the passengerList of the second bus to vector<string>result
            vector<string> passengerList = busList.at(i).getPassengerList();

            for (auto name: passengerList){
                // if name in the second bus's passengerList is found in vector<string>result
                if (find(result.begin(), result.end(), name) != result.end()){
                    // push_back the name to vector<string>tmp
                    tmp.push_back(name);
                }
            }
            result = tmp;
        }
    }

    cout << "Passengers who booked both buses are listed below:" << endl;
    for (auto name: result){
        cout << name << " ";
    }
    cout << endl;
}