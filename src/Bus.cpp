#include "Bus.h"
#include <iostream>
using namespace std;

// due to const data member,
// constructor can only be implemented by member initializer
Bus::Bus(int busNumVal, int capacityVal, string departureVal)
    : busNum(busNumVal),
      capacity(capacityVal),
      departure(departureVal)
{
    // empty body
}

string Bus::getBusDeparture() const {
    return departure;
}

void Bus::addPassenger(string passengerName){
    passengerList.push_back(passengerName);
}

void Bus::printPassenger(){
    cout << "Passengers of the " << departure << "-departed bus are listed below: " << endl;

    for (auto passenger : passengerList){
        cout << passenger << " ";
    }
    cout << endl;
}

vector<string> Bus::getPassengerList() const{
    return passengerList;
};