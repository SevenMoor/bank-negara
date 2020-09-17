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
        /*! @fn Bank(int cashierCount, double averageServiceTime, Simulation *simulation)
            @brief Creates an instance of bank
            @param cashierCount : number of cashier in the bank 
            @param averageServiceTime : Average time taken by cashiers to serve customers
            @param simulation : The state of the simulation 
         */
        Bank(int cashierCount, double averageServiceTime, Simulation *simulation);


        /*! @fn int getCashierCount()
            @brief return the number of cashiers in the bank
            @return the number of cashiers
         */
        int getCashierCount();


        /*! @fn int getClientCount()
            @brief return the number of clients, as the max length of the queue
            @return the total number of clients
         */
        int getClientCount();


        /*! @fn Cashier* freeCashier()
            @brief Browses the cashiers array and checks if there is a free 
            cashier and returns it. Otherwise, it returns a "fake" cashier.    
            @return a cashier if available 
         */
        Cashier* freeCashier();


        /*! 
            @fn Queue *getQueue()
            @brief gets the state of the queue and returns it
            @return the state of the queue
         */
        Queue *getQueue();


        /*! @fn Cashier *getCashiers()
            @brief Returns the cashiers array
            @return all cashiers
         */ 
        Cashier *getCashiers();


        /*! @fn Simulation *getSimulation()
            @brief gets the current state of the simulation and returns it
            @return the current state of the simulation
         */
        Simulation *getSimulation(); 
};

#endif
