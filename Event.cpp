/*!
    @file Event.cpp
    @author Aurélien OTTAVIANO
    @date 10/09/2020
*/
#include "Event.h"

Event::Event(double hour)
{
    this->time = hour;
}

Event::~Event() {}

double Event::getTime() {
	return time;
}
