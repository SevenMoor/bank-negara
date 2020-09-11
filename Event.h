#ifndef EVENT_H
#define EVENT_H

#include "Simulation.h"

class Event {
    private : 
        double time;

    protected:
        Simulation *simulation; 

    public :
        Event(Simulation *simulation, double beginHour = 0): simulation(simulation), time(beginHour){}
        virtual void process(); 
        double getTime(); 
}; 

class EventComparator{
    public:
        int operator()( Event& e1, Event& e2);
};

#endif
