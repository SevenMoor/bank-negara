/**
 * \class Bank
 *
 * @brief Bank containing a fixed number of cashiers, and
 * receiving clients who arrive in a pseudo-random way. 
 *
 * This class simulates a bank, with a fixed number of cashiers and arriving customers. 
 *
 * @author $Author: Mahfoud AMHIYEN $
 *
 * @date $Date: 2020/09/20 $
 *
 * Contact: mahfoudamhiyen@gmail.com
 *
 * Created on: Wed Sep 9 2020
 */
#ifndef BANK_H
#define BANK_H

#include "Cashier.h"
#include "Queue.h"

#include <cstdlib>
#include <iostream>
#include <ctime>

class Simulation;
class Queue;

using namespace std; 

class Bank{
    private:
        int cashierCount; ///< Counts the cashiers
        int clientCount; ///< Counts the arriving clients
        Cashier *cashiers; ///< Creates and store a defined number of cashiers
        Queue *queue; ///< Initializes a queue for the arriving clients
        double averageServiceTime; ///< Stores the average service time 
        Simulation *simulation; ///< Initializes the simulation
    public:
        /// Creates a bank instance
        Bank(int cashierCount, double averageServiceTime, Simulation *simulation);
        /** 
         * @return the number of cashiers
         */
        int getCashierCount();
        /** 
         * @return the total number of clients
         */
        int getClientCount();
        /** 
         * @return a cashier if available 
         */
        Cashier* freeCashier();
        /** 
         * @return the state of the queue
         */
        Queue *getQueue();
        /** 
         * @return all cashiers
         */ 
        Cashier *getCashiers(); 
        /** 
         * @return the actual state of the simulation
         */
        Simulation *getSimulation(); 
};

#endif
