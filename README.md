# Welcome to MechanicsSchedulingSystem!


- person.h/person.cpp : these are the header and implementation files for the person class; this is the super (base) class
- customer.h/customer.cpp : these are the header and implementation files for the customer class; this is a derived class which inherits from person class. It has additional info such as mechanicID.
- mechanic.h/mechanic.cpp : these are the header and implementation files for the mechanic class; this is a derived class which inherits from person class. It has additional info such as arrays of Appointments.
- queueass.h : it is the implementation of a queue; it is a generic queue class as required.
- mechanics.txt : info about all mechanics
- customers.txt : info about all customers
- main.cpp : it is the driver program which runs as expected; reads mechanic info from mechanic.txt and customer info from customer.txt. Then assigns customers to mechanics. Final output of all information (sorted).

  
