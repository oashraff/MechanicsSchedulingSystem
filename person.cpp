#include <iostream>
#include <string>
using namespace std;

// default constructor
Person::Person()
{
    name = "";
    id = 0000;
    age = 0;
}
//setters
void Person :: setname(string n) {name = n;}
void Person:: setid(long i) {id = i;}
void Person:: setage(int a) {age = a;}
//getters
string Person:: getname(){return name;}
long Person:: getid() {return id;}
int Person:: getage(){return age;}

// print func implementation
void Person:: printinfo()
{
    cout << "\nName: " << getname() << endl
        << "ID: " << getid() << endl
        << "Age: " << getage() << endl;   
}