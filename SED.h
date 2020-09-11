#ifndef SED_H
#define SED_H

#include <iostream> 
#include <queue> 
#include "Event.h"

using namespace std;

class SED{
    public :
        SED(double initTime = 0);
        void add(Event event); 
        double getCurrentTime(); 
        void start(); 
    protected:
        priority_queue<Event,vector<Event>,EventComparator> schedule;
        double initTime; 
        double currentTime;
}; 

#endif