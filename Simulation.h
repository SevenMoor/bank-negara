/**
 * 
 * @file Simulation.h
 * @author Aurélien OTTAVIANO
 * @date 10/09/2020
 * 
 */

#ifndef SIMULATION_H
#define SIMULATION_H

#include "SED.h"
#include "Bank.h"

class Bank;


/**
 * 
 * @class Simulation
 * @brief A representation of the simulation to run.
 * 
 */
class Simulation : public SED {
     private : 
        double expectedDuration;///< Duration during which new Arrival events are accepted
        double expectedServiceTime;///< Average duration of a cashier serving a client
        double interval;///< Interval between clients arriving to the bank
        int cashierCount;///< Number of cashiers to work at the bank
        Bank* bank;///< A pointer to the associated bank for navigability
    public :
        /**
         * 
         * @fn Simulation(double expectedDuration, double expectedServiceTime, double interval, int cashierCount)
         * @brief Constructor for the simulation
         * @param expectedDuration The expected duration
         * @param expectedServiceTime The average service time of a cashier
         * @param interval The expected interval for clients' arrival
         * @param cashierCount The number of cashiers to create in the bank
         * 
         */
        Simulation(double expectedDuration, double expectedServiceTime, double interval, int cashierCount);

        /**
         * 
         * @fn double getInterval()
         * @brief Read accessor for the interval attribute
         * @return The interval attribute
         * 
         */ 
        double getInterval();

        /**
         * 
         * @fn double getExpectedDuration()
         * @brief Read accessor for the expectedDuration attribute
         * @return The expectedDuration attribute
         * 
         */ 
        double getExpectedDuration(); 

        /**
         * 
         * @fn Bank* getBank()
         * @brief Read accessor for the bank attribute
         * @return The bank attribute
         * 
         */ 
        Bank* getBank();

        /**
         * 
         * @fn void printResults()
         * @brief Prints the required statistics of the simulation.
         * 
         */
        void printResults();
}; 

#endif