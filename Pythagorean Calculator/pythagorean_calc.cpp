#include <iostream>
#include <cmath>

int main() {
    // Declaration of variables
    int choice;
    float answer;
    int SideA2, SideB2, SideC2;
    int SideA, SideB, SideC;

    // Selection screen code
    bool calcOn = true;
    while(calcOn != false) {
        std::cout << "Hello, welcome to a Pythagorean Theorem calculator. Please select what information you have\n";
        std::cout << "1 - Side A and Side B\n";
        std::cout << "2 - Side B and Side C\n";
        std::cout << "3 - Side C and Side A\n";
        std::cout << "4 - Help\n";
        std::cout << "5 - Exit\n";
        std::cout << "Selection: ";
        std::cin >> choice;

            // The calculator portion of the code
            switch(choice) {
                case 1:
                    std::cout << "Please input your values:\n";
                    std::cout << "Side A: ";
                    std::cin >> SideA;
                    std::cout << "Side B: ";
                    std::cin >> SideB;
                    answer = pow(SideA, 2) + pow(SideB, 2);
                    std::cout << "Side C is: " << pow(answer, 2) << "\n";
                        if(SideA > 180 && SideB > 180) {
                        std::cout << "Error: value above 180";
                    }
                    break;
            }
    }
}