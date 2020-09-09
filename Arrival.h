#ifndef ARRIVAL_H
#define ARRIVAL_H

#include "Event.h"
#include "Simulation.h"

class Arrival : public Event {

    public :
        Arrival(double triggerTime); 
        void process(); 
    protected : 
        double getTriggerTime(); 
        void setTriggerTime(double triggerTime); 

    private : 
        double triggerTime; 

}; 
#endif
