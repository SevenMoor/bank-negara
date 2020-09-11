#include "SED.h"

SED::SED(double initTime) : initTime(initTime), totalWaitTime(0) {
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

    //STATISTICS
    //------------
    //Real duration --> ici
    //Queue length (max+avg) --> bank.queue
    //Client count --> bank.cashiers
    //Occupation rate --> bank.cashiers
    //Client avg waitTime --> ???

}

void SED::provideWaitTimeEntry(double wait){
    totalWaitTime += wait;
}

double SED::getCurrentTime(){
    return currentTime;
}