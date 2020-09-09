#include "Bank.h"

Bank::Bank(int cashierCount, double averageServiceTime){
    this->cashierCount = cashierCount; 
    this->averageServiceTime = averageServiceTime; 

    cashiers = new Cashier*[cashierCount]; 
    srand(time(nullptr)); 
    for(int i=0; i<cashierCount; i++){
        double random_time = averageServiceTime + std::rand()/((RAND_MAX + 1u)/averageServiceTime); 
        cashiers[i] = new Cashier(random_time, *this); 
    }
}

int Bank::getCashierCount(){
    return cashierCount; 
}

int Bank::getClientCount(){
    return queue->getMaxLength(); 
}

Cashier Bank::freeCashier(){
    // TODO 
}

Queue* Bank::getQueue(){
    return queue; 
}

Cashier** Bank::getCashiers(){
    return cashiers; 
}