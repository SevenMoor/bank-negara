#ifndef CASHIER_H
#define CASHIER_H

#include "Client.h"
#include "Departure.h"
#include "Arrival.h"
#include "Bank.h"

class Bank; 

class Cashier{
    private:
        double occupationRate;
        int clientCount;
        double averageServiceTime;
        bool available;
        Client client;
        Bank *bank; 
        bool exists; 
        double isBusy; 
    public:
        Cashier();
        Cashier(double averageServiceTime, Bank *bank);
        double getOccupationRate();
        int getClientCount();
        double getAverageServiceTime();
        bool isAvailable();
        void serve(Client client);
        void free();
        bool getExists(); 
};

#endif