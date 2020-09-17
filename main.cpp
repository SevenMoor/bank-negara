#include "Simulation.h"
#include "Bank.h"

#include "Arrival.h"


int main(){

    Simulation simulation(40,5,2,2);
    simulation.start();
    simulation.printResults();

    return 0;
}