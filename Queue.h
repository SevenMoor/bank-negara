/**
 * \class Queue
 *
 * @brief Queue is a container, designed to operate in a FIFO context 
 * (first-in first-out), where clients are inserted into one end of 
 * the container and extracted from the other.
 *
 * @author $Author: Mahfoud AMHIYEN $
 *
 * @date $Date: 2020/09/20 $
 *
 * Contact: mahfoudamhiyen@gmail.com
 *
 * Created on: Wed Sep 9 2020
 */
#ifndef Queue_H
#define Queue_H

#include "Client.h"
#include "Simulation.h"
#include <iostream> 
#include <deque> 
  
using namespace std;

class Bank; 

class Queue{
    private :
        ///< Uses deque as container
        deque<Client> clients;
        ///< Stores the queue length
        int maxLength;
        ///< Stores the average length 
        double averageLength;
        ///< Verifies if the queue is empty
        bool empty;
        ///< The bank where the clients are queuing
        Bank *bank;
    public :
        /*! @fn Queue(Bank *bank)
            @brief Constructor Queue
            @param Bank where the clients are queueing
        */
        Queue(Bank *bank);


        /*!
            @fn int getMaxLength()
            @brief Increment the variable maxLength when adding a new client to the queue
            @return the queue max length
         */
        int getMaxLength();


        /*! @fn double getAverageLength()
            @brief Compute the average length as the max length divided by the simulation duration
            @return the average length
         */
        double getAverageLength();


        /*! @fn bool isEmpty()
            @brief Verifies if the queue is empty or not 
            @return true if the queue is empty, else false
         */
        bool isEmpty();


        /*! @fn void add(Client) 
            @brief Adds a new client at the end of the end of the queue
            @param The client to be added
         */
        void add(Client client);

        
        /*! @fn Client pop()
            @brief Removes the first client in the queue
            @return the first client in the queue
         */
        Client pop();
};

#endif
