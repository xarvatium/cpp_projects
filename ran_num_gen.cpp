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
do {
    std::cout << "\n";
    std::cout << "Do you want to have a number generated?\n";
    std::cout << "Answer: (Y or N) ";
    std::cin >> answer;
    
    for (std::string::iterator i = answer.begin(); i < answer.end(); i++){
        *i = tolower(*i);
    }
    
    if (answer == "y") {
        std::cout << rand() % 100;
    }

}
while(answer != "n");
    
}