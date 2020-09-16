#include "Bank.h"
#include "Simulation.h"

Bank::Bank(int cashierCount, double averageServiceTime, Simulation *simulation){
    this->cashierCount = cashierCount; 
    this->averageServiceTime = averageServiceTime; 
    this->simulation = simulation; 
    cashiers = new Cashier*[cashierCount]; 
    srand(time(nullptr)); 
    for(int i=0; i<cashierCount; i++)
        cashiers[i] = new Cashier(averageServiceTime, this); 
    queue = new Queue(this); 
}

int Bank::getCashierCount(){
    return cashierCount; 
}

int Bank::getClientCount(){
    return queue->getMaxLength(); 
}

Cashier Bank::freeCashier(){
    for(int i=0; i<cashierCount; i++){
        if(cashiers[i]->isAvailable()) return *cashiers[i]; 
    }
    return Cashier(); 
}

Queue *Bank::getQueue(){
    return queue; 
}

Cashier **Bank::getCashiers(){
    return cashiers; 
}

Simulation *Bank::getSimulation(){
    return simulation; 
}