/**
 * \class Client
 *
 * @brief A client arrives, if a cashier is free, he takes 
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
        /// Default constructor
        Client(); 
        /// Creates a client with an arrival time
        Client(double arrivalTime);
        /** 
         * @return the arrival time
         */
        double getArrivalTime(); 
    private :
        ///< Stores the arrival time
        double arrivalTime; 

}; 


#endif
