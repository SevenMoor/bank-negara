#include "Departure.h"

void Departure::process(){
    if(simulation->getBank()->getQueue()->isEmpty()){
        Client newClient = simulation->getBank()->getQueue()->pop();
        cashier.serve(newClient);
    }
    else{
        cashier.free();
    }
    simulation->provideWaitTimeEntry(simulation->getCurrentTime()-client.getArrivalTime());
    delete &client;
}