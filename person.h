#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person
{
    private:
    string name; // general name var
    long id; // general id var
    int age; // general age var
    public:
    Person();
    //setters
    void setname(string n);
    void setid(long i);
    void setage(int a);
    //getters
    string getname();
    long getid();
    int getage();
    
    void printinfo(); // print func
    
    // Appointment struct for hours and minu
    struct Appointment
    {
        int hours, mins;
    };

};
#endif