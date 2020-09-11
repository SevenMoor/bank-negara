#include "Queue.h"


Queue::Queue(Bank *bank){
    this->bank = bank; 
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
    maxLength++; 
    clients.push_back(client); 
}

Client Queue::pop(){
    Client client = clients.front(); 
    averageLength += (bank->getSimulation()->getCurrentTime() - client.getArrivalTime()) * clients.size(); 
    clients.pop_front(); 
    return client; 
}

