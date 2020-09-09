#include "Queue.h"


Queue::Queue(Bank *bank){
    this->bank = bank; 
}

int Queue::getMaxLength(){
    return maxLength; 
}

double Queue::getAverageLength(){
    return clients.size() / bank->getClientCount(); 
}

bool Queue::isEmpty(){
    return clients.empty();
}

void Queue::add(Client client){
    clients.push_back(client); 
}

Client Queue::pop(){
    clients.pop_front();
}

