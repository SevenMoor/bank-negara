#ifndef CASHIER_H
#define CASHIER_H

class Cashier{
    private:
        double occupationRate;
        int clientCount;
        double averageServiceTime;
        bool available;
        Client client;
    public:
        double getOccupationRate();
        int getClientCount();
        double getAverageServiceTime();
        bool isAvailable();
        void serve(Client client);
        void free();
};

#endif