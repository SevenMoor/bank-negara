#ifndef ARRIVAL_H
#define ARRIVAL_H

#include "Event.h"
#include "Simulation.h"

class Arrival : public Event {

    public :
        Arrival(double time) : Event(time){}
        void process();
}; 
#endif
