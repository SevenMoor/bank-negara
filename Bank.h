/**
 * 
 * @file Bank.h
 *  @author $Author: Mahfoud AMHIYEN
 * @date $Date: 10/09/2020
 * 
 * \class Bank
 * @brief This class simulates a bank, with a fixed number of cashiers and a waiting line. 
 *
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
        int cashierCount; ///< Quantity of cashiers
        Cashier *cashiers; ///< An array of the cashiers working at the Bank
        Queue *queue; ///< A pointer to the waiting line for the bank
        double averageServiceTime; ///< The average time it takes for a cashier to serve a client 
        Simulation *simulation; ///< A pointer towards the associated simulation
    public:
        /*! @fn Bank(int cashierCount, double averageServiceTime, Simulation *simulation)
            @brief Creates an instance of bank.
            @param cashierCount : Quantity of cashiers to create
            @param averageServiceTime : Average time taken by cashiers to serve customers
            @param simulation : A pointer towards the associated simulation
         */
        Bank(int cashierCount, double averageServiceTime, Simulation *simulation);


        /*! @fn int getCashierCount()
            @brief Read accessor for the quantity of cashiers.
            @return Number of cashiers working at the bank
         */
        int getCashierCount();


        /*! @fn Cashier * freeCashier()
            @brief Browses the cashiers array and checks if there is a free 
            cashier and returns it. Otherwise, it returns a "fake" cashier.    
            @return An instance of cashier, either free or fake to avoid memory errors. 
         */
        Cashier* freeCashier();


        /*! 
            @fn Queue * getQueue()
            @brief Read accessor for the pointer to the waiting line of the bank.
            @return A pointer to the waiting line
         */
        Queue *getQueue();


        /*! @fn Cashier * getCashiers()
            @brief Read accessor for the cashier array.
            @return The cashier array of the bank
         */ 
        Cashier *getCashiers();


        /*! @fn Simulation * getSimulation()
            @brief Read accessor for the pointer towards the associated simulation.
            @return A pointer to the associated simulation
         */
        Simulation *getSimulation(); 
};

#endif
