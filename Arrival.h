#ifndef ARRIVAL_H
#define ARRIVAL_H

#include "Event.h"
#include "Simulation.h"

class Arrival : public Event {
    private:
        Simulation* simulation;
    public :
        Arrival(double time, Simulation* simulation) : Event(time), simulation(simulation){}
        void process();
}; 
#endif
