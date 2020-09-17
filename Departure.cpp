/*!
    @file Departure.cpp
    @author Aurélien OTTAVIANO
    @date 10/09/2020
*/
#include "Departure.h"
#include "Event.h"
#include "Simulation.h"

Departure::Departure(Client *const client, Cashier *const cashier, double time, Simulation *const simulation) : Event(time), simulation(simulation), cashier(cashier), client(client) {}

void Departure::process() {
	Client next;
	Queue *queue = simulation->getBank()->getQueue();

	if (!queue->isEmpty()){
		next = queue->pop();
		double waitTime = simulation->getCurrentTime()-next.getArrivalTime();
		simulation->provideWaitTimeEntry(waitTime);
		cashier->serve(&next);
	}
	else
		cashier->free();

	//delete client;
}
