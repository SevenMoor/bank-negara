#ifndef SED_H
#define SED_H

#include <queue>
#include "Event.h"

using namespace std;

class SED{
    public :
        SED(double initTime);
        void add(Event event); 
        double getCurrentTime(); 
        void start(); 
    protected:
        priority_queue<Event> schedule;
        double initTime; 
        double currentTime;
}; 

#endif