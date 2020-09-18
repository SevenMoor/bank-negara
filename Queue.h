/**
 * 
 * @file Queue.h
 * @author Mahfoud AMHIYEN
 * @date 10/09/2020
 * 
 * \class Queue
 *
 * @brief A representation of the waiting line in a given bank
 * 
 *  Queue is a container, designed to operate in a FIFO context 
 * (first-in first-out), where clients are inserted into one end of 
 * the container and extracted from the other.
 *
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
        deque<Client> clients; ///< std::deque used to contain the FIFO
        int maxLength; ///< The queue maximal registered length
        double averageLength;  ///< The average registered length of the queue
        Bank *bank; ///< A pointer to the associated bank
    public :
        /*! @fn Queue(Bank *bank)
            @brief Constructor for the Queue
            @param Bank A pointer to the associated bank
        */
        Queue(Bank *bank);


        /*!
            @fn int getMaxLength()
            @brief Read accessor for the max length of the queue
            @return The max length of the queue
         */
        int getMaxLength();


        /*! @fn double getAverageLength()
            @brief Computes and read the average length of the queue at calling time
            @return The average length of the queue
         */
        double getAverageLength();


        /*! @fn bool isEmpty()
            @brief Verifies if the queue is empty or not 
            @return True if the queue is empty, else false
         */
        bool isEmpty();


        /*! @fn void add(Client client) 
            @brief Adds a new client at the end of the end of the queue, and updates length statistics accordingly
            @param client The client to be added
         */
        void add(Client client);

        
        /*! @fn Client pop()
            @brief Removes and returns the first client in the queue
            @return The first client in the queue
         */
        Client pop();
};

#endif
