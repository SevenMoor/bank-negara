/*!
    @file Client.cpp
    @author Mahfoud AMHIYEN
    @date 10/09/2020
*/
#include "Client.h"

Client::Client(double arrivalTime){
    this->arrivalTime = arrivalTime; 
}
double Client::getArrivalTime(){
    return arrivalTime; 
}

Client::Client(){
    
}