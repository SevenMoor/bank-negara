#ifndef Queue_H
#define Queue_H

#include "Client.h"
#include "Simulation.h"
#include <iostream> 
#include <deque> 
  
using namespace std;

class Bank; 

class Queue{
    private :
        deque<Client> clients;
        int maxLength;
        double averageLength;
        bool empty;
        Bank *bank;
    public :
        Queue(Bank *bank);
        int getMaxLength();
        double getAverageLength();
        bool isEmpty();
        void add(Client client);
        Client pop();
        void printQueue(); 
};

#endif
