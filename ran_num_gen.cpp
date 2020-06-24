#include <iostream>
#include <string>
#include <stdlib.h>
#include <cctype>
#include <cstdlib>
#include <random>
#include <time.h>


int main () {



    std::string answer;
    srand(time(NULL));

    std::cout << "Do you want to have a number generated?\n";
    std::cout << "Answer: (Y or N) ";
    std::cin >> answer;
    
    
    if (answer == "Y") {
        std::cout << rand()%100;
        
    }
    else if (answer == "N") {
        std::cout << "Alright.";
        return 0;
    }
    for (std::string::iterator i = answer.begin(); i < answer.end(); i++) {
        *i = tolower(*i);
    }
    
}