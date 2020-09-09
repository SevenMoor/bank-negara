#ifndef SIMULATION_H
#define SIMULATION_H

#include "SED.h"

class Simulation : public SED {
    public :
        Simulation(double averageArrivalTime, double expectedDuration, double expectedServiceTime, double interval) : averageArrivalTime(averageArrivalTime), expectedDuration(expectedDuration), expectedServiceTime(expectedServiceTime), interval(interval),  SED(0) {}
        double getAverageArrivalTime();
        double getExpectedDuration(); 
    private : 
        double averageArrivalTime;
        double expectedDuration;
        double expectedServiceTime;
        double interval;

}; 

#endif