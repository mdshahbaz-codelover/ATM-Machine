// ATM Machine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void Show()
{
    cout << ".......MENU......." << endl;
    cout << " 1: DepositeAmount " << endl;
    cout << " 2: Withdraw  " << endl;
    cout << " 3: CheckBalance" << endl;
    cout << " 4: Exit"<<endl;
    cout << " Enter your Option.....from 1 to 4.." << endl;
    cout << "\n";
}
int main(){

while(1){    
         Show();
         int option;
        static double amount=500;
        cin >> option;
        switch (option)
        {
        int depamount;
        case 1:cout << " Enter your depositeAmount" << endl;cin >> depamount;
  
            amount += depamount;
            cout << " Congratualation.... Your Amount of :"<<depamount<<"$  Deposite Successfully ";
            cout << "\n\n";
            break;
        case 2:
                int withdrawAmount;
                cout << " Enter WithdrawAmount....\n";
                cin >> withdrawAmount;
                if (amount >= withdrawAmount) {
                    amount -= withdrawAmount;
                    cout << " Your Remaining Balance is....." << amount << "$" << endl;
                }
                else;
                    cout << " Insufficient Balance in your account :" << amount << "$" << endl;
                cout << "\n\n";
            break;
        case 3:cout << " total balance " << amount<<"$"<<endl;
            cout << "\n";
            break;
        case 4:
            exit(0);
        default:
                cout << "Sorry...invalid entry";
        }

    }
}
