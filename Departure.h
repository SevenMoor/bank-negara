/**
 * 
 * @file Departure.h
 * @author Aurélien OTTAVIANO
 * @date 10/09/2020
 * 
 */
#ifndef DEPART_H
#define DEPART_H

#include "Event.h"

class Cashier;
class Client;
class Simulation;


/**
 * 
 * \class Departure
 * @brief A type of SED event simulating the end of service for a given client. This class is derived from Event.
 *
 */
class Departure : public Event
{
	private:
		Simulation *const simulation; ///< A pointer to the associated simulation
		Cashier *const cashier; ///< A pointer to the cashier that finished serving the clien
		Client *const client; ///< A pointer to the client

	public:
        Departure(const Departure&) = delete;

		/*! @fn Departure(Client *const client, Cashier *const cashier, double time, Simulation *const simulation)
			@brief Constructor for a new Departure instance
			@param client : The client that finished being served
			@param cashier : The cashier serving the client
			@param time : The triggering time of the departure
			@param simulation : A pointer to the associated simulation
		*/
		Departure(Client *const client, Cashier *const cashier, double time, Simulation *const simulation);

		/*! @fn void process()
			@brief Override of the virtual process method from Event.
			
			It checks if the queue is empty, if it's not, a waiting client is assigned to the cashier,
			Otherwise the cashier is freed.
		 */
		void process();
};

#endif