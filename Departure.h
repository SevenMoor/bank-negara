#ifndef DEPARTURE_H
#define DEPARTURE_H

#include "Event.h"
#include "Cashier.h"
#include "Client.h"

class Departure : public Event{

    public : 
        Departure(double triggerTime, Client client, Cashier cashier); 
        void process(); 
    private :
        double triggerTime;
        Client client;
        Cashier cashier; 

};

#endif
