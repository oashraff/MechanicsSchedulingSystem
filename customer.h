#include <iostream>
#include <string>
#include "person.h"
using namespace std;

class customer : public Person
{
    private:
    long MechanicID; // id for mechanics var
    Appointment appointment; // var for appointment

    public:
    customer(); // default constructor

    //setters and getters
    void setMechanicID(long mid);
    void setappointment(Appointment app);
    long getMechanicID();
    Appointment getapp();

    // overloading of the <>== operators
    bool operator<(const customer& a);

    bool operator>(const customer& a);

    bool operator== (const customer& a);
};
