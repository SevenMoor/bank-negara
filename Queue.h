#ifndef QUEUE_H
#define QUEUE_H

#include "Bank.h"
#include "Client.h"
#include <iostream> 
#include <deque> 
  
using namespace std;

class Queue{
    private:
        deque<Client> clients;
        int maxLength;
        double averageLength;
        bool empty;
        Bank *bank;
    public:
        Queue(Bank *bank);
        int getMaxLength();
        double getAverageLength();
        bool isEmpty();
        void add(Client client);
        Client pop();
        void printQueue(); 
};

#endif
