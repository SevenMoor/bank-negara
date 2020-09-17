#include "Cashier.h"

default_random_engine Cashier::generator;

Cashier::Cashier(){
    exists = false; 
}

Cashier::Cashier(double averageServiceTime, Bank *bank){
    this->bank = bank; 
    this->averageServiceTime = averageServiceTime; 
    exists = true;
    clientCount = 0;
    available = true;
    isBusy = 0.0;
}

double Cashier::getOccupationRate(){
    occupationRate = isBusy/bank->getSimulation()->getCurrentTime(); 
    return occupationRate; 
}
int Cashier::getClientCount(){
    return clientCount; 
}
double Cashier::getAverageServiceTime(){
    double average = 0; 
    
    for(int i=0; i<bank->getCashierCount(); i++){
        average += averageServiceTime; 
    }
    return average/bank->getCashierCount(); 
}
bool Cashier::isAvailable(){
    return available; 
}
void Cashier::serve(Client* client){ 
    std::poisson_distribution<int> distri(averageServiceTime);
    double departureTime = bank->getSimulation()->getCurrentTime()+averageServiceTime;
    bank->getSimulation()->add(new Departure(client, this, departureTime, bank->getSimulation()));  
    isBusy += averageServiceTime;
    clientCount++;
    available = false;
}
void Cashier::free(){
    available = true; 
}

bool Cashier::getExists(){
    return exists; 
}