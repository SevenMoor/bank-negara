#include "Client.h"

Client::Client(double arrivalTime){
    this->arrivalTime = arrivalTime; 
}
double Client::getArrivalTime(){
    return arrivalTime; 
}