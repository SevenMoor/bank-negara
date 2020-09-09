#ifndef BANK_H
#define BANK_H

#include "Cashier.h"
#include "Queue.h"
#include "Simulation.h"
#include <cstdlib>
#include <iostream>
#include <ctime>


using namespace std; 

class Bank{
    private:
        int cashierCount;
        int clientCount;
        Cashier** cashiers;
        Queue *queue; 
        double averageServiceTime;
        Simulation simulation; 
    public:
        Bank(int cashierCount, double averageServiceTime);
        int getCashierCount();
        int getClientCount();
        Cashier freeCashier();
        Queue* getQueue(); 
        Cashier** getCashiers(); 
        Simulation getSimulation(); 
};

#endif
