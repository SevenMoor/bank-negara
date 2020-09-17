/**
 * \class Cashier
 *
 * @brief Cashier works in the bank and has a fixed average service time. 
 *
 * He serves clients, one by one. It is assumed that cashiers are never tired, 
 * at the end of a customer's treatment, the cashier takes one more if the 
 * line is not empty.
 *
 * @author $Author: Mahfoud AMHIYEN $
 *
 * @date $Date: 2020/09/20 $
 *
 * Contact: mahfoudamhiyen@gmail.com
 *
 * Created on: Wed Sep 9 2020
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

class Cashier{
    private:
        double occupationRate; ///< Stores the occupation rate
        int clientCount; ///< Stores the number of client
        double averageServiceTime; ///< Stores the average service time
        bool available; ///< Shows if the cashier is free or not. 
        Client client; ///< Stores the client to be served
        Bank *bank; ///< Sotres the bank where the cashier is working
        bool exists; ///< Verifies if the cashier exists
        double isBusy; ///< Stores the time when the cashiers is serving clients
    public:
        /*! @fn Cashier() 
            @brief Default constructor : Creates a "fake" cashier
        */  
        Cashier();


        /*! @fn Cashier(double averageServiceTime, Bank *bank)
            @brief Creates a cashier working in a bank with an average service time
            @param averageServiceTime : The average time it takes to serve a customer
            @param bank : The bank where he is working 
        */ 
        Cashier(double averageServiceTime, Bank *bank);


        /*! @fn double getOccupationRate()
            @brief Computes the occupation rate as the current total work 
            time divided by the simulation duration
            @return the occupation rate 
         */
        double getOccupationRate();


        /*! @fn int getClientCount()
            @brief Returns the number of clients which is incremented every time a client is served
            @return the number of clients
         */
        int getClientCount();


        /*! @fn double getAverageServiceTime()
            @brief Returns the average service time
            @return the average service time
         */
        double getAverageServiceTime();


        /*! @fn bool isAvailable 
            @brief Return if the cashier is available or not
            @return true if the cashier is available, else false
         */
        bool isAvailable();


        /*! @fn void serve(Client *client)
            @brief Serves a specific client, by creating an event "Departure" and 
            adding it to the simulation, before cumulating the work time and count the number of clients
            @param client : The first client in client  
         */
        void serve(Client* client);


        /*! @fn void free()

            @brief Frees a cashier after serving a client, by setting available to true
         */
        void free();


        /*! @fn bool getExists()
            @brief Returns if a cashier is a fake/exists or not
            @return if true a cashier exists 
         */
        bool getExists(); 
};

#endif