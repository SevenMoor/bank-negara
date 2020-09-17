#include "Simulation.h"
#include "Bank.h"

#include "Arrival.h"
#include "Poisson.h"

int main(){

    Poisson::init();
    Simulation simulation(40,5,2,2);
    simulation.start();
    simulation.printResults();

    return 0;
}