#ifndef DEPART_H
#define DEPART_H

#include "Event.h"

class Cashier;
class Client;
class Simulation;

class Departure : public Event
{
	private:
		Simulation *const simulation;
		Cashier *const cashier;
		Client *const client;

	public:
        Departure(const Departure&) = delete;
		Departure(Client *const client, Cashier *const cashier, double time, Simulation *const simulation);
		void process();
};

#endif