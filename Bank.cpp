#include "Bank.h"

Bank::Bank(int cashierCount, double averageServiceTime, Simulation *Simulation){
    this->cashierCount = cashierCount; 
    this->averageServiceTime = averageServiceTime; 
    this->simulation = simulation; 
    cashiers = new Cashier*[cashierCount]; 
    srand(time(nullptr)); 
    for(int i=0; i<cashierCount; i++){
        double random_time = averageServiceTime + std::rand()/((RAND_MAX + 1u)/averageServiceTime); 
        cashiers[i] = new Cashier(random_time, this); 
    }

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

Queue* Bank::getQueue(){
    return queue; 
}

Cashier** Bank::getCashiers(){
    return cashiers; 
}