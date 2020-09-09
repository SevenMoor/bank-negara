#ifndef EVENT_H
#define EVENT_H



class Event {
    private : 
        double beginHour; 

    public :
        Event(double beginHour = 0); 
        virtual void process(); 
        double getBeginHour(); 
}; 


#endif
