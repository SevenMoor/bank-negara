#ifndef CASHIER_H
#define CASHIER_H

#include "Client.h"
#include "Departure.h"
#include "Arrival.h"
#include "Bank.h"

class Cashier{
    private:
        double occupationRate;
        int clientCount;
        double averageServiceTime;
        bool available;
        Client client;
        Bank bank; 
    public:
        Cashier(double averageServiceTime, Bank bank);
        double getOccupationRate();
        int getClientCount();
        double getAverageServiceTime();
        bool isAvailable();
        void serve(Client client);
        void free();
};

#endif