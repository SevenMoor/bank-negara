#include "Simulation.h"
#include "Arrival.h"
#include "Bank.h"

#include <random>
#include <math.h>

Simulation::Simulation(double expectedDuration, double expectedServiceTime, double interval, int cashierCount) : SED(), expectedDuration(expectedDuration), expectedServiceTime(expectedServiceTime), interval(interval), cashierCount(cashierCount) {
   Arrival* first = new Arrival(0.0,this);
   this->add(first);
    bank = new Bank(cashierCount,expectedServiceTime,this);
}

double Simulation::getInterval(){
    return interval;
}

double Simulation::getExpectedDuration(){
    return expectedDuration;
}

Bank* Simulation::getBank(){
    return bank;
}

void Simulation::printResults(){
    cout << "Real duration: " << currentTime << endl;
    cout << "Queue max length: " << bank->getQueue()->getMaxLength() << endl;
    cout << "Queue average length: " << bank->getQueue()->getAverageLength() << endl;

    Cashier* crew = bank->getCashiers();
    int sum = 0;
    for (int i = 0; i < bank->getCashierCount(); i++){
        if(crew[i].getExists()){
             sum += crew[i].getClientCount();
            cout << "Cashier " << i << "'s occupation rate: " << crew[i].getOccupationRate() << endl;
        }
    }
    cout << "Client count: " << sum << endl;

    double avgWait = totalWaitTime / sum;
    cout << "Average wait time: " << avgWait << endl;    
}