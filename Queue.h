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
        /// Constructs the queue
        Queue(Bank *bank);
        /** 
         * @return the max length, we increment the variable when adding a client to the queue
         */
        int getMaxLength();
        /** 
         * @return the average legnth computed as the max length divided by the simulation duration
         */
        double getAverageLength();
        /** 
         * @return true if the queue is empty, else false
         */
        bool isEmpty();
        /** 
         * Adds a new client at the end of the
         */
        void add(Client client);
        /** 
         * Removes the first client in the queue and return it
         */
        Client pop();
};

#endif
