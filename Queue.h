#ifndef QUEUE_H
#define QUEUE_H

#include <deque>

using namespace std;

class Queue{
    private:
        deque<Client> clients;
        int maxLength;
        double averageLength;
        bool empty;
    public:
        int getMaxLength();
        double getAverageLength();
        bool isEmpty();
        void add(Client client);
        Client pop();
};

#endif
