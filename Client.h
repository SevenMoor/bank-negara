#ifndef CLIENT_H
#define CLIENT_H

class Client {
    public : 
        Client(double arrivalTime); 
        double getArrivalTime(); 
        Client(); 
    private :
        double arrivalTime; 

}; 


#endif
