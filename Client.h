/**
 * \class Client
 *
 * @brief Client arrives, if a cashier is free, he takes 
 * care of the client, otherwise the client takes place in a queue
 *
 * It is assumed that the client is honest and patient, does not
 * try to get ahead of others and waits in line until they are served.
 * A customer is characterized by his or her arrival time. 
 *
 * @author $Author: Mahfoud AMHIYEN $
 *
 * @date $Date: 2020/09/20 $
 *
 * Contact: mahfoudamhiyen@gmail.com
 *
 * Created on: Wed Sep 9 2020
 */
#ifndef CLIENT_H
#define CLIENT_H

class Client {
    public:
        /*! @fn Client
            @brief Default constructor
         */
        Client(); 


        /*! @fn Client(double arrivalTime)
            @brief Creates a client with an arrival time
            @param arrivalTime : the moment when the client arrives in the bank
        */
        Client(double arrivalTime);

        
        /*! @fn double getArrivalTime()
            @brief return the client arrival time
            @return the arrival time
         */
        double getArrivalTime(); 
    private :
        ///< Stores the arrival time
        double arrivalTime; 

}; 


#endif
