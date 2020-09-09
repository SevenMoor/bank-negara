#ifndef CASHIER_H
#define CASHIER_H

#include "Client.h"

class Cashier{
    private:
        double occupationRate;
        int clientCount;
        double averageServiceTime;
        bool available;
        Client client;
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