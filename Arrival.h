/**
 * \class Arrival
 *
 * @brief Arrival is an event that is triggered 
 * when the customer arrives at the bank.
 * The class works with a Poisson distribution as a law of probabilities. 
 *
 * @author $Author: Aurélien OTTAVIANO $
 *
 * @date $Date: 2020/09/20 $
 *
 * Contact: thepsylord88@gmail.com
 *
 * Created on: Wed Sep 9 2020
 */
#ifndef ARRIVAL_H
#define ARRIVAL_H

#include <random>

#include "Event.h"

class Simulation;

class Arrival : public Event{
    private:
		Simulation *const simulation; ///< The current simulation

	public:
		/*! @fn Arrival(const Arrival&)
			@brief ! TODO 
			@param ! TODO
		*/
        Arrival(const Arrival&) = delete;

		/*! @fn Arrival(double time, Simulation *const simulation)
			@brief Creates a new event : arrival 
			@param time : The moment when the arrival event is triggered
			@param simulation : The current state of the simulation
		*/
		Arrival(double time, Simulation *const simulation);

		/*! @fn void process()
			@brief Generates a pseudo-random number using the Poisson distribution. 
			Creates a new clients and then checks if a cashier can take care of the client. 
			Finaly, it adds the event to the simulation
		*/
		void process();
};

#endif