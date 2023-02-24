#ifndef BUS_H
#define BUS_H
#include <vector>
#include <string>
using namespace std;

class Bus{

private:
    const int busNum;   
    // 1-indexed; number assigned according to the order that the bus is created

    const int capacity; 
    // each bus can accomodate at most 50 passengers

    string departure;  
    // bus either departs in the morning or in the evening

    vector<string> passengerList;
    // record the info of passenger that booked the bus

    // static data
    // static int count;
    /*
    在.cpp
    int Bus::count = 0
    */

public:
    // static member function
    // static int getCount();
    /*
    在.cpp
    int Bus::getCount(){
        return count;
    }
    static data member 只能透過static member function去存取他
    */

    // constructor
    Bus(int busNumVal, int capacityVal, string departureVal);

    // get function
    // Note: get function should be const
    string getBusDeparture() const;
    vector<string> getPassengerList() const;
    
    // once a passenger book the bus,
    // add the info of passenger to the passengerList
    void addPassenger(string passengerName);

    // print the info of passenger that booked the bus
    void printPassenger();
};

#endif