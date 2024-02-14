#include <iostream>
#include <string>
#include "person.h"
using namespace std;


class mechanic : public Person
{
    private:
    int counter; // counter variable
    Appointment* arr; // dynamic appointment var - dynamic arr
    
    public:
    mechanic(); // default constructor
    bool isAvailable(Appointment app); // function to check for availavility of mechanics
    bool isavailable();
    // setters
    void setAppointments(Appointment app);
    void setcount(int count); 
    void setarr(Appointment app);
    //getters
    int getcount();
    Appointment getAppointments();
    Appointment* getarr();

    ~mechanic(); // deconstructor 
 
};