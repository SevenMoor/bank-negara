/*!
    @file SED.cpp
    @author Aurélien OTTAVIANO
    @date 10/09/2020
*/

#include "SED.h"
#include <iostream>

SED::SED() {
	currentTime = 0.0;
	totalWaitTime = 0.0;
}

void SED::start() {
	Event *e = nullptr;

	//We treat events chronologically by taking them from the priority queue
	while (!schedule.empty()){
		e = schedule.top();
		currentTime = e->getTime();
		schedule.pop();
		e->process();

		delete e;
	}
}

void SED::add(Event *e) {
	schedule.push(e);
}

double SED::getCurrentTime() const {
	return currentTime;
}

void SED::provideWaitTimeEntry(double time){
	totalWaitTime += time;
}
