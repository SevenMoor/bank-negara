#include "Cashier.h"


Cashier::Cashier(double averageServiceTime, Bank *bank){
    this->bank = bank; 
    this->averageServiceTime = averageServiceTime; 
    exists = true; 
}

Cashier::Cashier(){
    exists = false; 
}

double Cashier::getOccupationRate(){
    occupationRate = isBusy/bank->getCashierCount(); 
    return occupationRate; 
}
int Cashier::getClientCount(){
    return bank->getClientCount(); 
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
void Cashier::serve(Client client){ 
    Departure departure(client, this, bank->getSimulation()->getCurrentTime(), bank->getSimulation()); 
    bank->getSimulation()->add(departure);  
    isBusy += averageServiceTime; 
}
void Cashier::free(){
    available = false; 
}

bool Cashier::getExists(){
    return exists; 
}

Simulation *Bank::getSimulation(){
    return simulation; 
}