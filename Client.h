/**
 * 
 * @file Client.h
 * @author Mahfoud AMHIYEN
 * @date 10/09/2020
 * 
 */
#ifndef CLIENT_H
#define CLIENT_H


/**
 * 
 *  \class Client
 * @brief A representation of clients arriving to the bank. 
 * 
 */
class Client {
    public:
        /*! @fn Client
            @brief Default constructor
         */
        Client(); 


        /*! @fn Client(double arrivalTime)
            @brief Constructs a client with its associated arrival time
            @param arrivalTime : The moment when the client arrives in the bank
        */
        Client(double arrivalTime);

        
        /*! @fn double getArrivalTime()
            @brief Read accessor for the arrival time
            @return The arrival time
         */
        double getArrivalTime(); 
    private :
        double arrivalTime; ///< Arrival time of the client to the bank

}; 


#endif
