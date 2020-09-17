/**
 * \class Departure
 *
 * @brief Departure is an event that is triggered 
 * when the cashier finished serving the client and the client leaves the bank.
 *
 * @author $Author: Aurélien OTTAVIANO $
 *
 * @date $Date: 2020/09/20 $
 *
 * Contact: thepsylord88@gmail.com
 *
 * Created on: Wed Sep 9 2020
 */
#ifndef DEPART_H
#define DEPART_H

#include "Event.h"

class Cashier;
class Client;
class Simulation;

class Departure : public Event
{
	private:
		Simulation *const simulation; ///< The current state of the simulation
		Cashier *const cashier; ///< The cashier serving the client
		Client *const client; ///< The client getting served

	public:
		/*! @fn Departure(const Departure&)
			@brief ! TODO
			@param ! TODO 
		*/
        Departure(const Departure&) = delete;

		/*! @fn Departure(Client *const client, Cashier *const cashier, double time, Simulation *const simulation)
			@brief Creates a new event Departure
			@param client : The client getting served and going to leave the bank
			@param cashier : The cashier serving the client
			@param time : The departure time, when the event is triggered
			@param simulation : The current state of the simulation
		*/
		Departure(Client *const client, Cashier *const cashier, double time, Simulation *const simulation);

		/*! @fn void process()
			@brief Checks if the queue is empty. If so, it is freeing the cashier. 
			Otherwise, it gets the fist client in the queue, and asks a cashier to serve him. 
		 */
		void process();
};

#endif