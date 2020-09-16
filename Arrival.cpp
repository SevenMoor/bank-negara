#include <random>

#include "Arrival.h"
#include "Event.h"
#include "Simulation.h"

std::default_random_engine Arrival::generator;

Arrival::Arrival(double heureDeclenchement, Simulation *const simulation) 
    :Event(heureDeclenchement), simulation(simulation) {}

void Arrival::process() {
	std::poisson_distribution<int> distri(simulation->getInterval());
	Client *client = new Client(simulation->getCurrentTime());
	Cashier cashier = simulation->getBank()->freeCashier();

	if (cashier.getExists())
		cashier.serve(client);
	else
		simulation->getBank()->getQueue()->add(*client);

	double heurePrevue = simulation->getCurrentTime() +  (double) distri(generator);
	if(heurePrevue <= simulation->getExpectedDuration())
		simulation->add(new Arrival(heurePrevue, simulation));
}
