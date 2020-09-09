#ifndef EVENT_H
#define EVENT_H

#include "Simulation.h"

class Event {
    private : 
        double time;

    protected:
        Simulation* simulation; 

    public :
        Event(double beginHour = 0, Simulation* simulation): time(beginHour), simulation(simulation){}
        virtual void process(); 
        double getTime(); 
}; 


#endif
