#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
class bank
{
    char name[100], addr[100], y;
    int balance;

public:
    void create_account();
    void display_account();
    void withdrawal_account();
    void deposit_account();
};

void bank::create_account()
{
    cout<<"Enter your name:-"<<endl;
    cin>>name;
    cout<<"Enter your address:-"<<endl;
    cin>>addr;
    cout<<"Enter balance you want to submit:-"<<endl;
    cin>>balance;
    cout<<"Enter your type of account:- (S) for savings and (C) for current "<<endl;
    cin>>y;
    cout<<"Congratulations!! \n Your account is created\n";
};
void bank::display_account()
{
    cout<<"Your Name:-"<<name;
    cout<<"\nAccount type:- ";
    if (y=='s'||y=='S')
    {
        cout<<"Savings"<<endl;
    }
    else if (y=='c' || y=='C')
    {
        cout<<"Current"<<endl;
    }
    cout<<"Your balance is :-"<<balance<<endl;
};
void bank::deposit_account()
{
    int a;
    cout<<"Enter amount you want to deposit:-"<<endl;
    cin>>a;
    balance+=a;
    cout<<"Your current balance is:-"<<balance<<endl;
};
void bank::withdrawal_account()
{
    int a;
    cout<<"Enter amount you want to withdraw:-"<<endl;
    cin>>a;
    balance-=a;
    cout<<"Your current balance is:-"<<balance<<endl;
};

int main()
{
    int x = 0;
    bank account;
    while (x != 5)
    {
        cout << "\t \t Welcome to Bank huehue" << endl
             << "Press 1 to create account" << endl
             << "Press 2 to display account" << endl
             << "Press 3 to withdrawal " << endl
             << "Press 4 to deposit" << endl
             << "Press 5 to exit" << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            account.create_account();
            break;
        case 2:
            account.display_account();
            break;
        case 3:
            account.withdrawal_account();
            break;
        case 4:
            account.deposit_account();
            break;

        default:
            break;
        }
    }
    return 0;
}