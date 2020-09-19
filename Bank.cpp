/*!
    @file Bank.cpp
    @author Mahfoud AMHIYEN
    @date 10/09/2020
*/
#include "Bank.h"
#include "Simulation.h"

Bank::Bank(int cashierCount, double averageServiceTime, Simulation *simulation){
    this->cashierCount = cashierCount; 
    this->averageServiceTime = averageServiceTime; 
    this->simulation = simulation; 
    cashiers = new Cashier[cashierCount];

    //We fill in the cashier array
    for(int i=0; i<cashierCount; i++)
        cashiers[i] =  Cashier(averageServiceTime, this); 
        
    queue = new Queue(this); 
}

int Bank::getCashierCount(){
    return cashierCount; 
}

Cashier* Bank::freeCashier(){
    for(int i=0; i<cashierCount; i++){
        if(cashiers[i].isAvailable()) return &cashiers[i]; 
    }
    return new Cashier(); 
}

Queue *Bank::getQueue(){
    return queue; 
}

Cashier *Bank::getCashiers(){
    return cashiers; 
}

Simulation *Bank::getSimulation(){
    return simulation; 
}