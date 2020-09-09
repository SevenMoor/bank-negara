#ifndef BANK_H
#define BANK_H

#include "Cashier.h"

class Bank{
    private:
        int cashierCount;
        int clientCount;
        Cashier* cashiers;
        double averageServiceTime;
    public:
        Bank(int cashierCount, double averageServiceTime);
        int getCashierCount();
        int getClientCount();
        Cashier freeCashier();
};

#endif
