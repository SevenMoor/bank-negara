#include "Event.h"

Event::Event(double heureDeclechement)
{
    time = heureDeclechement;
}

Event::~Event() {}

double Event::getTime() {
	return time;
}
