#include "SED.h"

SED::SED(double initTime) : initTime(initTime){
    this->schedule = priority_queue<Event,vector<Event>,EventComparator>();
}

void SED::add(Event e){
    schedule.push(e);
}

void SED::start(){
    while(!schedule.empty()){
        Event e = schedule.top();
        currentTime = e.getTime();

        e.process();

        schedule.pop();
    }
}

double SED::getCurrentTime(){
    return currentTime;
}