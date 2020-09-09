#ifndef SIMULATION_H
#define SIMULATION_H

#include "SED.h"

class Simulation : public SED {
    public :
        Simulation(double averageArrivalTime, double expetedDuration, double serviceTime, double timeArrivals); 
        double getAverageArrivalTime();
        double getExpectedDuration(); 
    private : 
    double averageArrivalTime;
    double expetedDuration;
    double serviceTime;
    double timeArrivals;

}; 

#endif