/**
 * 
 * @file Cashier.h
 * @author Mahfoud AMHIYEN
 * @date 10/09/2020
 *
 */
#ifndef CASHIER_H
#define CASHIER_H

#include "Client.h"
#include "Departure.h"
#include "Arrival.h"
#include "Bank.h"

#include <random>

using namespace std;

class Bank; 


/**
 * 
 * @class Cashier
 * @brief Class representing the workers of the Bank. 
 * 
 */
class Cashier{
    private:
        double occupationRate; ///< The ratio of active time over total simulated time
        int clientCount; ///< Number of clients already served
        double averageServiceTime; ///< Average time needed to serve a client
        bool available; ///< Stores true when the cashier is not serving any client, else false
        Bank *bank; ///< Pointer towards the bank where the cashier works
        bool exists; ///< Stores true if the cashier works at the bank, and false if it was created to avoid memory errors
        double isBusy; ///< Contains the active time of the cashier. It is used to calculate the occupation rate
    public:
        /*! @fn Cashier() 
            @brief Default constructor : Creates a fake cashier to avoid memory issues.
        */  
        Cashier();


        /*! @fn Cashier(double averageServiceTime, Bank *bank)
            @brief Creates a new instance of Cashier.
            @param averageServiceTime The average time it takes to serve a customer
            @param bank  A pointer to the bank where the cashier works
        */ 
        Cashier(double averageServiceTime, Bank *bank);


        /*! @fn double getOccupationRate()
            @brief Computes the occupation as the time spent serving clients over the current ellapsed time.
            @return The occupation rate 
         */
        double getOccupationRate();


        /*! @fn int getClientCount()
            @brief Read accessor for the number of clients served.
            @return The number of clients served
         */
        int getClientCount();


        /*! @fn double getAverageServiceTime()
            @brief Read accessor for the average service time.
            @return The average service time
         */
        double getAverageServiceTime();


        /*! @fn bool isAvailable()
            @brief Read accessor for the available attribute.
            @return The available attribute
         */
        bool isAvailable();


        /*! @fn void serve(Client *client)
            @brief Serves a specific client, by creating an event "Departure" and 
            adding it to the simulation, before cumulating the work time and count the number of clients
            @param client : The first client in client  
         */
        void serve(Client* client);


        /*! @fn void free()
            @brief Frees a cashier after serving a client.
         */
        void free();


        /*! @fn bool getExists()
            @brief Read accessor for the existence of a cashier in a bank (whether it is fake or not).
            @return The value of the exists attribute 
         */
        bool getExists(); 
};

#endif