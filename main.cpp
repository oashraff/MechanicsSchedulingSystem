#include <iostream>
#include <cstdlib>
#include <string>
#include "person.h"
#include "customer.h"
#include "mechanic.h"
#include "person.cpp"
#include "customer.cpp"
#include "mechanic.cpp"
#include "queueass.h"
#include <fstream>

using namespace std;


int main()
{
    // filler variables/ojects
    string name;
    long id; 
    int age;
    Person :: Appointment app;

    cout << "               CAR WORKSHOP                \n============================================\n\n";
    

    // prompting for mechanics details
    mechanic mechanics[3];
    for (int i = 0 ; i < 3; i++)
    {
        cout << "Mechanic " << i+1 << " Name: " << endl;
        cin >> name;
        mechanics[i].setname(name);

        cout << "Mechanic " << i+1 << " ID: " << endl;
        cin >> id;
        mechanics[i].setid(id);

        cout << "Mechanic " << i+1 << " Age: " << endl;
        cin >> age;
        mechanics[i].setage(age);
    }

    queue<class customer> Q; // defining a queue of customers

    // prompting for customers details
    customer customers[4];
    for (int i = 0 ; i < 4; i++)
    {
        cout << "Customer " << i+1 << " Name: " << endl;
        cin >> name;
        customers[i].setname(name);

        cout << "Customer " << i+1 << " ID: " << endl;
        cin >> id;
        customers[i].setid(id);

        cout << "Customer " << i+1 << " Age: " << endl;
        cin >> age;
        customers[i].setage(age);

        cout << "Customer " << i+1 << " Appointment time (hrs mins - <separated by spaces>): " << endl;
        cin >> app.hours >> app.mins;
        customers[i].setappointment(app);  
    }


    
    //sort array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < (4 - i - 1); j++)
        {
            if (customers[j] > customers[j + 1])
                swap(customers[j], customers[j + 1]);
        }
    }

    //Assign mechanics + pushing into queue
    for(int i=0;i<4;i++)
    { 
        if(mechanics[i%3].isavailable())
        {
            customers[i].setMechanicID(mechanics[i%3].getid());
            mechanics[i%2].setAppointments(mechanics[i%3].getAppointments());
            customers[i].setappointment(mechanics[i%3].getAppointments());
            Q.push(customers[i]);
        }
    }

    
 
    cout << "\n============================================\n\n";
    // pop queue and print info of customers/mechanics   
    while(!Q.isEmpty())
    { 
        customer c = Q.firstelement();
        Q.pop();
        c.printinfo();

        //print assigned mechanic's info
        cout<< "\nAssigned Mechanics's Info: "<< endl; 
        for (int i = 0; i < 3; i++)
        {
            if(c.getMechanicID() == mechanics[i].getid())
            {
                mechanics[i].printinfo();
            }
            
        }
        cout << "--------------------------------------" << endl;
    }    
    return 0;
}