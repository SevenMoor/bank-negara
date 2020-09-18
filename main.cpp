#include "Simulation.h"
#include "Bank.h"

#include "Arrival.h"
#include "Poisson.h"

#include <getopt.h>
#include <iostream>
#include <string>


using namespace std;

void printHelp(){
    cout << 
        "-n <n> : Set number of cashiers \n"
        "-d <n> : Set the expected simulation duration \n"
        "-s <val> : Set average service time \n"
        "-t <val> : Set average arrival time" << endl;
    exit(0); 
}


int main(int argc, char **argv){
    double st = 0, tm = 0; 
    int dp = 0, nc = 0; 
    const char* const short_opts = "n:d:s:t:h";
    const option long_opts[] = {
            {"nc", required_argument, nullptr, 'n'},
            {"dp", required_argument, nullptr, 'd'},
            {"st", required_argument, nullptr, 's'},
            {"tm", required_argument, nullptr, 't'},
            {"help", no_argument, nullptr, 'h'}
    };
    
    while (true){
        const auto opt = getopt_long(argc, argv, short_opts, long_opts, nullptr);

        if (opt < 0)
           printHelp(); 
           
        switch (opt){
            case 'n' : 
                nc = stoi(optarg);
                cout << "Number of cashiers set to: " << nc << std::endl;
                break;
            case 's' : 
                st = stod(optarg);
                cout << "Average service time set to: " << st << std::endl;
                break;
            case 't' :
                tm = stod(optarg);
                cout << "Average arrival time set to: " << tm << std::endl;
                break;
            case 'd' :
                dp = stoi(optarg);
                cout << "Expected simulation duration set to: " << dp << std::endl;
                break;
            case 'h' :
            case '?' :
            default :
                printHelp();
                break;
        }
    }
    
    cout << "\n ------- Begin Simulation -------" << endl; 
    
    Poisson::init();
    Simulation simulation(dp, st, tm, nc);
    simulation.start();
    simulation.printResults();

    cout << "\n ------- End Simulation ------- \n" << endl; 
    return 0;
}
