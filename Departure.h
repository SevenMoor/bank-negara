#ifndef DEPARTURE_H
#define DEPARTURE_H

#include "Event.h"
#include "Cashier.h"
#include "Client.h"

class Departure : public Event{

    public : 
        Departure(Client client, Cashier cashier, double time, Simulation* simulation) : client(client), cashier(cashier), Event(time,simulation){} 
        void process(); 
    private :
        Client client;
        Cashier cashier;
};

#endif
