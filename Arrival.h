/**
 * @file Arrival.h
 * @author Aurélien OTTAVIANO
 * @date 10/09/2020
 * 
 * @class Arrival
 * @brief Type of SED event representing a client arriving to the bank. This class is derived from Event. 
 *
 */
#ifndef ARRIVAL_H
#define ARRIVAL_H

#include "Event.h"

class Simulation;

class Arrival : public Event{
    private:
		Simulation *const simulation; ///< A constant pointer directing towards the instance of the associated simulation.

	public:
		//Deleted copy constructor
        Arrival(const Arrival&) = delete;

		/*! @fn Arrival(double time, Simulation *const simulation)
			@brief Constructs a new instance of arrival.
			@param time : The expected processing time of the arrival event
			@param simulation : A pointer towards the associated simulation object
		*/
		Arrival(double time, Simulation *const simulation);

		/*! @fn void process()
			@brief Override of the virtual process method from Event. 
			
			It creates a new client, assigns it to a free cashier or if there is none to the queue. 
			It creates a new arrival event according to a poisson distribution to determine when
			the next client will arrive.
		*/
		void process();
};

#endif