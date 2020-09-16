#ifndef ARRIVAL_H
#define ARRIVAL_H

#include <random>

#include "Event.h"

class Simulation;

class Arrival : public Event{
    private:
		Simulation *const simulation;
        static std::default_random_engine generator;

	public:
        Arrival(const Arrival&) = delete;
		Arrival(double time, Simulation *const simulation);
		void process();
};

#endif