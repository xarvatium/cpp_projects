#include <iostream>
#include <stdlib.h>
#include <string>

int main() {
    int actNum, initAmt, actNumIn, actDep;
    char userIn, createResp;
    const bool T(true), F(false);
    std::string actName;

    std::cout << "Main Menu\n";
    std::cout << "1. Create a New Account\n";
    std::cout << "2. Deposit Amount\n";
    std::cout << "3. Withdraw Amount\n";
    std::cout << "4. Balance Inquiry\n";
    std::cout << "5. All Account Holder List\n";
    std::cout << "6. Close an Account\n";
    std::cout << "7. Modify an Account\n";
    std::cout << "8. Exit\n";
    std::cout << "Please Input an Option (1-8): ";
    std::cin >> userIn;

    while(!F) {
        switch(userIn) {
            case '1' :
                std::cout << "---New Account Entry Form---\n";
                std::cout << "Enter the account number: ";
                std::cin >> actNum;
                std::cout << "Enter the account holder name: ";
                std::cin >> actName;
                std::cout << "Enter Initial Amount: ";
                std::cin >> initAmt;
                std::cout << "Account Created Successfully\n";
                T;
                break;
            case '2' :
                std::cout << "---Account Deposit---\n";
                std::cout << "Please input your account number: ";
                std::cin >> actNumIn;
                std::cout << "Please input how much you would like to deposit: ";
                std::cin >> actDep;
                std::cout << "Thank you for depositing $" << actDep << "\n";
        }
    }
}