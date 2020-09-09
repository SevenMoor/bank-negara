#include "Arrival.h"

#include <random>
#include <math.h>

void Arrival::process(){
    Client client = Client(simulation->getCurrentTime());
    Cashier cashier = simulation->getBank()->freeCashier();
    if(cashier.getExists())
        cashier.serve(client);
    else
        simulation->getBank()->getQueue()->add(client);
    double nextTime = simulation->getInterval() + exp(-1)*exp(random());
    if (nextTime <= simulation->getExpectedDuration())
        Arrival first = Arrival(nextTime,simulation);
}