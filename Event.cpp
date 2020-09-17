#include "Event.h"

Event::Event(double hour)
{
    this->time = hour;
}

Event::~Event() {}

double Event::getTime() {
	return time;
}
