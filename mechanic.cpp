#include <iostream>
#include <string>
using namespace std;

// default constructor 
mechanic :: mechanic()
{
    counter = 0;
    
    arr = new Appointment[100];
    for (int i = 0; i < 100; i++) {arr->hours = 0; arr->mins = 0;}
}
// implementation of the function
bool mechanic::isAvailable(Appointment app)
{
    for(int i = 0; i < 100; i++)
    {
        if(app.hours == (arr + i)->hours && app.mins == (arr+i)-> mins){return false;}
    }
    return true;
}
bool mechanic::isavailable()
{
    if(counter<100)
        return true;
    else return false;
}

// implementation of setters and getters
int mechanic::getcount(){return counter;}
void mechanic::setcount(int count){counter = count;}
void mechanic::setarr(Appointment app){arr[++counter] = app;}
void mechanic:: setAppointments(Appointment app)
{
    arr[++counter].hours = app.hours+1;
    arr[counter].mins = app.mins;
}
Person::Appointment mechanic :: getAppointments()
{
    return arr[counter];
}
Person:: Appointment* mechanic::getarr(){return arr;}

mechanic::~mechanic()
{delete[] arr;}