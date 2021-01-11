#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <locale>

int main() {
    FILE *fp, *ft;
    char userIn, createResp;
    const bool T(true), F(false);
    int initAmt, actNumIn, actDep, actWith, actBal, actNum, actNumInit;
    std::string date,out,actFirstName,actLastName;
    
    std::ofstream outdata;
    std::ifstream indata;
    std::string out;
    std::ifstream indata;
    // Generating .csv file
    out=".csv";
    out="accounts"+out;
    outdata.open(out.c_str());

    // Gives a menu that loops until the user presses "8"
    while(!F) {
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
        // The data validation portion that checks for the user response
        switch(userIn) {
            case '1' :
                actNumInit = 1;
                std::cout << "---New Account Entry Form---\n";
                std::cout << "Enter the account holder's first name: ";
                std::cin >> actFirstName;
                std::cout << "Enter the account holder's last name: ";
                std::cin >> actLastName;
                std::cout << "Enter Initial Amount: ";
                std::cin >> initAmt;
                actBal = initAmt;
                std::cout << "Your account number is: " << actNumInit << "\n";
                outdata << "Account Information\n" << std::endl;
                outdata << "Account Holder Name" << "," << actFirstName << " " << actLastName << std::endl;
                outdata << "Account Number" << "," << actNumInit << std::endl;
                actNumInit++;
                outdata << "Account Balance" << "," <<initAmt << std::endl;
                std::cout << "Account Created Successfully\n";
                T;
                break;
            case '2' :
                std::cout << "---Account Deposit---\n";
                std::cout << "Please input your account number: ";
                std::cin >> actNumIn;
                std::cout << "Please input how much you would like to deposit: ";
                std::cin >> actDep;
                actBal = initAmt + actDep;
                std::cout << "Thank you for depositing $" << actDep << ". Your new total is: $" << actDep + initAmt << "\n";
                T;
                break;
            case '3' :
                std::cout << "---Account Withdrawal---\n";
                std::cout << "Please input how much you would like to withdraw: ";
                std::cin >> actWith;
                std::cout << "You have withdrawn: $" << actWith << "\n";
                T;
                break;
            case '4' :
                std::cout << "---Balance Inquiry---\n";
                std::cout << "Please input your account number: ";
                std::cin >> actNum;
                std::cout << "You balance is: $" << actBal << "\n";
            case '5' :
                T;
                break;
            case '6' :
                T;
                break;
            case '7' :
                T;
                break;
            case '8' :
                exit(0);
                return(0);
                F;
        }
    }
}

int switchFuncs() {

}