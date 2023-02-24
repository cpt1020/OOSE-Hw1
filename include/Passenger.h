#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>
#include <vector>
using namespace std;

class Passenger{

private:
    string name;
    vector<string> bookingList;
    // record what buses are booked by the passenger

public:
    // constructor
    Passenger(string nameVal);

    // get function
    string getName() const;

    // set function
    void setName(string nameVal);

    // once the passenger books a bus,
    // add the info of the booked bus to bookingList
    void bookBus(string busDeparture);
    
    // print buses booked by the passenger
    void printBookedBus();

};

#endif