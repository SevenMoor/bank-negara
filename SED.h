#ifndef SED_H
#define SED_H

#include <vector>
#include <queue>

#include "Event.h"

class SED{
	protected:
		double currentTime;
		double totalWaitTime;
		std::priority_queue<Event*, std::vector<Event*>, EventComparator> schedule;

	public:
		SED();
		void start();
		void add(Event *e);
		double getCurrentTime() const;
		void provideWaitTimeEntry(double time);
};

#endif