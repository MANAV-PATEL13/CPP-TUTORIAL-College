#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class bank
{
     int choi;

     struct detail
     {
          char name[30];
          char number[10];
          char type[10];
          int balance;
          int temp = 0;

     } b1[10];

public:
     void new_member()
     {
          cout << "Welcome to CPP Bank" << endl;
          cout << "Enter your name : ";
          cin.getline(b1->name, 30);
          cout << endl
               << "Your bank account number : ";
          cin.getline(b1->number, 9);
          cout << "Account Type " << endl
               << "1) Saving" << endl
               << "2) Current" << endl;
          int choices;
          cin >> choices; // Get user input for account type
          switch (choices)
          {
          case 1:
               strcpy(b1->type, "Saving");
               break;

          case 2:
               strcpy(b1->type, "Current"); // Corrected to set type to "Current"
               break;

          default:
               cout << "Invalid value" << endl; // Fixed typo in "invalid"
               return;                          // Exit the function on invalid input
          }
          cout << endl
               << "Enter an account balance : ";
          cin >> b1->balance;
          cout << endl
               << "Account created succesfully " << endl;
          cout << "account name is :" << b1->name << endl;
          cout << "account number is : " << b1->number << endl;
          cout << "account type is : " << b1->type << endl;
          cout << "acoount balance is : " << b1->balance << endl;
     }

     void menu()
     {
          cout << ":::::::::::: MENU ::::::::::::"
               << "1) Set balance"
               << "2) Debit money"
               << "3) Withdraw Money "
               << "4) Check balance";

          switch (choi)
          {
          case 1:
               cout << "1)enter a value : ";
               cin >> b1->balance;
               break;
          case 2:
               cout << "deposit money";
               cin >> b1->temp;
               b1->balance += b1->temp;
               b1->temp=0;
               break;
          
          case 3:
               cout << "withdraw money";
               cin >> b1->temp;
               if(b1->temp >= b1->balance){
                    b1->balance -= b1->temp;

               }
               
               break;
          case 4:
               cout << "check balance";
               break;
               
          default :
               cout << "invalid choices : ";
               break;         
          }
     }
};
int main()
{
     bank ba;
     ba.new_member();

     return 0;
}