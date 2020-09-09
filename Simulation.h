#ifndef SIMULATION_H
#define SIMULATION_H

#include "SED.h"
#include "Bank.h"

class Simulation : public SED {
    public :
        Simulation(double expectedDuration, double expectedServiceTime, double interval, int cashierCount);
        double getInterval();
        double getExpectedDuration(); 
        Bank* getBank();
    private : 
        double expectedDuration;
        double expectedServiceTime;
        double interval;
        int cashierCount;
        Bank bank;
}; 

#endif