#include "Simulation.h"
#include "Arrival.h"

#include <random>
#include <math.h>

Simulation::Simulation(double expectedDuration, double expectedServiceTime, double interval, int cashierCount) : expectedDuration(expectedDuration), expectedServiceTime(expectedServiceTime), interval(interval), cashierCount(cashierCount), SED(), bank(Bank(cashierCount,expectedServiceTime)) {
   double firstTime = interval + exp(-1)*exp(random());
   Arrival first = Arrival(firstTime,this);
}

double Simulation::getInterval(){
    return interval;
}

double Simulation::getExpectedDuration(){
    return expectedDuration;
}

Bank* Simulation::getBank(){
    return &bank;
}