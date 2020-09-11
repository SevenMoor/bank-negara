#ifndef EVENT_H
#define EVENT_H

class Simulation;

class Event {
    private : 
        double time;
    public :
        Event(double beginHour = 0) :  time(beginHour){}
        virtual void process(); 
        double getTime(); 
}; 

class EventComparator{
    public:
        int operator()( Event* e1, Event* e2);
};

#endif
