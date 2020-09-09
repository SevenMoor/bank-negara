#ifndef EVENT_H
#define EVENT_H



class Event {
    private : 
        double time; 

    public :
        Event(double beginHour = 0) : time(beginHour){}
        virtual void process(); 
        double getTime(); 
}; 


#endif
