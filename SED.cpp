#include "SED.h"

SED::SED(double initTime) : initTime(initTime){
    this->schedule = priority_queue<Event>();
}

void SED::add(Event e){
    
}

void SED::start(){
    
}

double SED::getCurrentTime(){
    return currentTime;
}