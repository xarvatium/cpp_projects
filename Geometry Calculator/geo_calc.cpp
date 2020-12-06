#include <iostream>
#include <stdlib.h>
#include <string>

int main() {
    double Num1, Num2, Num3;
    char Operator;
    const bool T(true), F(false);
    char shape;

    do {
        std::cout << "Please select what you need to find the area of:\n";
        std::cout << "(For right now, only input: square, circle, rectangle, and trapezoid)\n";
        std::cout << "Or type X to exit and Z to restart\n";
        std::cout << "Shape: ";
        std::cin >> shape;
        
    } while(shape == 'Z');

    while(!F) {
        switch(shape) { 
            case 'square' :

        }
    }
}