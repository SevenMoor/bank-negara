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
	Client *client = new Client(simulation->getCurrentTime());
	Cashier* cashier = simulation->getBank()->freeCashier();

	if (cashier->getExists())
		cashier->serve(client);
	else
		simulation->getBank()->getQueue()->add(*client);

	double departureTime = simulation->getCurrentTime() + Poisson::next(simulation->getInterval());
	if(departureTime <= simulation->getExpectedDuration()){
		simulation->add(new Arrival(departureTime, simulation));
	}
}
