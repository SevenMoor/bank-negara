/**
 * @file Event.h
 * @author Aurélien OTTAVIANO
 * @date 10/09/2020
 * 
 * @class Event
 * @brief A representation of an event in the SED, with a scheduled triggering time. It is an abstract class. 
 * 
*/

#ifndef EVENT_H
#define EVENT_H


class SED;

class Event{
	protected:
		double time;///< The scheduled triggering time of the event

	public:
		/**
		 * 
		 * @fn Event(double hour)
		 * @brief Constructor for an Event object, strictly to be called from derived classes constructors.
		 * @param hour The scheduled triggering time of the event
		 * 
		 */
		Event(double hour);

		virtual ~Event();

		/**
		 * 
		 * @fn double getTime()
		 * @brief Read accessor for the triggering time
		 * @return The triggering time for the event
		 * 
		 */
		double getTime();

		/**
		 * 
		 * @fn virtual void process()
		 * @brief Actions to perform when the triggering time is reached. Pure virtual function to be overriden in derived classes.
		 * 
		 */
		virtual void process() = 0;
};

/**
 * 
 * @class EventComparator
 * @brief Utility class to tell the priority_queue in SED to order events by smallest triggering time.
 * 
 */
class EventComparator {
	public:
	  int operator() ( Event *e1, Event *e2) {
	    return e1->getTime() > e2->getTime();
	  }
};

#endif