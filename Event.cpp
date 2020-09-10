#include "Event.h"

double Event::getTime(){
    return time;
}

int EventComparator::operator()( Event& e1, Event& e2) {
    return e1.getTime() > e2.getTime();
}