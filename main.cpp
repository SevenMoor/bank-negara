#include "Simulation.h"
#include "Bank.h"

#include "Arrival.h"


int main(){

    Simulation simulation(40,2,5,3);
    simulation.start();
    simulation.printResults();

    return 0;
}