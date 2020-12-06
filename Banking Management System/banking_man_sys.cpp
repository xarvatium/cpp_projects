#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>

int main() {
    FILE *fp, *ft;
    char userIn, createResp;
    const bool T(true), F(false);
    int initAmt, actNumIn, actDep, actWith;

    struct account {
        char actFirstName[50], actLastName[50];
        int actNum;
        int actBal;
    };

    struct account e;
    char xactFirstName[50], xactLastName[50];
    long int recsize;

    fp=fopen("users.txt","rb+");

    if (fp == NULL) {
        fp = fopen("users.txt","wb+");

        if (fp==NULL) {
            puts("Cannot open file");
            return 0;
        }
        }

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
        switch(userIn) {
            case '1' :
                fseek(fp,0,SEEK_END);
                std::cout << "---New Account Entry Form---\n";
                std::cout << "Enter the account number: ";
                std::cin >> e.actNum;
                std::cout << "Enter the account holder's first name: ";
                std::cin >> e.actFirstName;
                std::cout << "Enter the account holder's last name: ";
                std::cin >> e.actLastName;
                std::cout << "Enter Initial Amount: ";
                std::cin >> initAmt;
                e.actBal = initAmt;
                fwrite(&e,recsize,1,fp);
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
                T;
                break;
        }
    }
}