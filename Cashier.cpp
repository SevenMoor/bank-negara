/*!
    @file Cashier.cpp
    @author Mahfoud AMHIYEN
    @date 10/09/2020
*/
#include "Cashier.h"
#include "Poisson.h"

Cashier::Cashier(){
    //Fake cashier to be consistant in Bank::freeCashier()
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
    double rand = Poisson::next(averageServiceTime);
    double departureTime = bank->getSimulation()->getCurrentTime()+rand;

    //We plan the end of service as Departure
    bank->getSimulation()->add(new Departure(client, this, departureTime, bank->getSimulation()));

    //We add the service time to total, increase served client count and make cashier unavailable
    isBusy += rand;
    clientCount++;
    available = false;
}
void Cashier::free(){
    available = true; 
}

bool Cashier::getExists(){
    return exists; 
}