#ifndef SED_H
#define SED_H

#include "Event.h"

class SED{
    public :
        SED(double initTime); 
        void add(Event event); 
        double hour(); 
        void start(); 
        
    private :
        double initTime; 
}; 

#endif