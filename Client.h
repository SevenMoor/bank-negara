#ifndef CLIENT_H
#define CLIENT_H

class Client {
    public:
        Client(); 
        Client(double arrivalTime);
        double getArrivalTime(); 
    private :
        double arrivalTime; 

}; 


#endif
