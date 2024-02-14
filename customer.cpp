#include <iostream>
#include <string>
using namespace std;

    customer :: customer() {MechanicID = 0000; appointment.hours = 0; appointment.mins = 0;} // default constructor

    // setters and getters
    void customer::setMechanicID(long mid){MechanicID = mid;} 
    void customer::setappointment(Appointment app)
    {
        app.hours = appointment.hours;
        app.mins = appointment.mins;
    }
    long customer:: getMechanicID(){return MechanicID;}

    Person:: Appointment customer:: getapp(){return appointment;}

    // implementation for the overloaded operators
    bool customer:: operator<(const customer& a)
    {
        
        if (this->appointment.hours < a.appointment.hours)
        {return true;}
        else if (this->appointment.hours > a.appointment.hours)
        {return false;}
        else if (this->appointment.mins < a.appointment.mins)
        {return true;}
        else if (this->appointment.mins > a.appointment.mins)
        {return false;}
        return false;
    }

    bool customer:: operator>(const customer& a)
    {
        customer app;
        if (this->appointment.hours > a.appointment.hours)
        {return true;}
        else if (this->appointment.hours < a.appointment.hours)
        {return false;}
        else if (this->appointment.mins > a.appointment.mins)
        {return true;}
        else if (this->appointment.mins < a.appointment.mins)
        {return false;}
        return false;
    }

    bool customer:: operator== (const customer& a)
    {
        customer app;
        if (this->appointment.hours == a.appointment.hours && this->appointment.mins == a.appointment.mins)
        {return true;}
        return false;
    }