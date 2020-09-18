/**
 * 
 * @file SED.h
 * @author Aurélien OTTAVIANO
 * @date 10/09/2020
 * 
 */ 

#ifndef SED_H
#define SED_H

#include <vector>
#include <queue>

#include "Event.h"

using namespace std;


/**
 * 
 * @class SED
 * @brief An event management system for the simulation
 * 
 * It uses a priority_queue to register events, and order them according to the time of the event in ascending order. Chosen events are then processed. 
 * 
 */
class SED{
	protected:
		double currentTime; ///< The current time in the simulation
		double totalWaitTime; ///< The total time waited by all clients that have been in the queue
		priority_queue<Event*, vector<Event*>, EventComparator> schedule; ///< The priority queue used for storing and ordering events

	public:
		/**
		 * 
		 * @fn SED()
		 * @brief The constructor for the SED class.
		 * 
		 */
		SED();

		/**
		 * 
		 * @fn void start()
		 * @brief The main loop of the event processing simulation.
		 * 
		 */
		void start();

		/**
		 * 
		 * @fn void add(Event* e)
		 * @brief Method used to add a new event to the scheduler.
		 * @param e pointer to the Event to add to the scheduler 
		 * 
		 */
		void add(Event *e);

		/**
		 * 
		 * @fn double getCurrentTime() const
		 * @brief Read accessor for the current time of the simulation.
		 * @return The current time of the simulation
		 * 
		 */
		double getCurrentTime() const;

		/**
		 * 
		 * @fn void provideWaitTimeEntry(doublr time)
		 * @brief Adds an amount of wait time to the total waited time.
		 * @param time The amount of time to add 
		 * 
		 */
		void provideWaitTimeEntry(double time);
};

#endif