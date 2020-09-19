/*!
    @file Queue.cpp
    @author Mahfoud AMHIYEN
    @date 10/09/2020
*/
#include "Queue.h"
#include "Bank.h"

Queue::Queue(Bank *bank){
    this->bank = bank;
    maxLength = 0;
    averageLength = 0.0;
}

int Queue::getMaxLength(){
    return maxLength; 
}

double Queue::getAverageLength(){
    return maxLength / bank->getSimulation()->getExpectedDuration(); 
}

bool Queue::isEmpty(){
    return clients.empty();
}

void Queue::add(Client client){
    clients.push_back(client); 

    //We don't forget to increase max length if necessary
    if(maxLength< (int) clients.size())
        maxLength++;
}

Client Queue::pop(){
    Client client = clients.front(); 

    //We register average length as integration
    averageLength += (bank->getSimulation()->getCurrentTime() - client.getArrivalTime()) * clients.size(); 
    clients.pop_front(); 
    
    return client; 
}

