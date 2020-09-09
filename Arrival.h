#ifndef ARRIVAL_H
#define ARRIVAL_H

#include "Event.h"
#include "Simulation.h"

class Arrival : public Event {
    public :
        Arrival(double time, Simulation* simulation) : Event(time,simulation){}
        void process();
}; 
#endif
