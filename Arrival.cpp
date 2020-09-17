#include <random>
/*!
    @file Arrival.cpp
    @author Aurélien OTTAVIANO
    @date 10/09/2020
*/
#include "Arrival.h"
#include "Event.h"
#include "Simulation.h"
#include "Poisson.h"

Arrival::Arrival(double hour, Simulation *const simulation) 
    :Event(hour), simulation(simulation) {}

void Arrival::process() {
	std::poisson_distribution<int> distri(simulation->getInterval());
	Client *client = new Client(simulation->getCurrentTime());
	Cashier* cashier = simulation->getBank()->freeCashier();

	if (cashier->getExists())
		cashier->serve(client);
	else
		simulation->getBank()->getQueue()->add(*client);

	double heurePrevue = simulation->getCurrentTime() + Poisson::next(simulation->getInterval());
	if(heurePrevue <= simulation->getExpectedDuration()){
		simulation->add(new Arrival(heurePrevue, simulation));
	}
}
