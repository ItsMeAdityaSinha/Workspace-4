#include <iostream>
#include <stdio.h>
using namespace std;
 
class Bank 
{
    int balance=0;
 
public:
    void deposit();
    void withdraw();
}; 
// Function to deposit the account
void Bank::deposit()
{
    int Amount;
    cout << "Enter how much money you want to deposit: ";
    cin>>Amount;
    if(Amount<500)
    {
        cout<<"The minimum balance should be 500";
    }
    balance = balance+Amount;
    cout << "\n Available Balance: "<< balance;
}
// Function to withdraw
void Bank::withdraw()
{
    float amount;
    cout << "\nEnter how much money you want to withdraw: ";
    cin>>amount;
    balance = balance-amount;
    if(balance>=500)
    {
    cout << "\n Available balance: "<< balance;
    }
    else
    {
    	cout<<"\n Balance is less than Rs.500";
	}
}
// Driver code
int main()
{
    int acc_no,n;
        char name[100], acc_type[100];
        float balance;
        cout<<"\n Enter Details: \n";
        cout<<"-----------------------";
        cout<<"\n Accout No. ";
        cin>>acc_no;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Account Type : ";
        cin>>acc_type;
        cout<<"\n Deposit Minimum Balance of 500 : ";
        cin>>balance;
        if(balance<500)
        {
        	cout<<"\nError";
		}
		else
		{
		cout<<"What transaction you want to perform:\n"" 1-Deposit\n"" 2- Withdraw";
		cin>>n;
		switch(n)
			{
		case 1: 
        {
        Bank b1;  
        b1.deposit(); 
        break;
        }

        case 2: 
        {
        Bank b1;
		b1.withdraw(); 
        break;
        }
        default: 
        cout<<"Error";
			}
		}
        return 0;
}