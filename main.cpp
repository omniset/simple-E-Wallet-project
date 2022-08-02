#include <iostream>
#include <string>
using namespace std;

int balance = 10000000;
int main ()
{
    string username;
    string password;
    int loginAttempt = 0;

    while (loginAttempt < 5)
    {
        cout << "Please enter your user name: ";
        cin >> username;
        cout << "Please enter your password: ";
        cin >> password;

        if (username == "MnD" && password == "1234567")
        {
            cout << "Welcome MnD! you have succesfully login \n";
            break;
        }
        else if (username == "cia" && password == "7654321")
        {
            cout << "Welcome Cia !you have succesfully login \n";
            break;
        }
        else
        {
            cout << "Invalid Username or Password :( . Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
    }

    while (true)
    {

        cout << "\n Features available: \n";
        cout << "1. E-wallet balance \n";
        cout << "2. Utility Payments(movies, bill, shopping)\n";
        cout << "3. Logout\n";
        cout << "-----------------------------------------------\n";
        cout << " \n Please enter your choice: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
            case 1 :{
            cout << "\nYour balance is : Rp "<<balance;
            }break;

            case 2 :
            {
            int pilihan;
            cout << "\n Options available : \n";
            cout << "1. Movie : \n";
            cout << "2. Bills : \n";
            cout << "3. Shopping : \n";
            cout << "---------------------------------\n";
            cout << "Enter choice: \n"; cin>>pilihan;

            switch (pilihan)
            {
                case 1 :{
                    cout<< "You have choose Movie\n";
                }break;
                case 2 :{
                    cout<< "You have choose Bills\n";
                }break;
                case 3 :{
                    cout<< "You have choose Shopping\n";
                }break;
            }
            int diskon;
            int amount;

            cout<<"Please input a right amount:";
            cin>>amount;
            if
             (amount>=100000){
	        	diskon=0.06*amount;
            	} else if (amount>=50000){
	            	diskon=0.04*amount;
	                }else if (amount>=25000){
		                diskon=0.02*amount;
	                    }else {
                    		diskon=0;
                    	}

            cout<<"Total Amount : Rp."<<amount<<endl;
	        cout<<"Discount     : Rp."<<diskon<<endl;
	        cout<<"Total Paying : Rp."<<amount-diskon<<endl;


            cout<<"a Rp."<<amount-diskon; cout<<" has deducted from your acount balance\n";
            balance=balance-(amount-diskon);
            cout<<"your balance now: Rp."<<balance<<endl;
            break;

            case 3:{
            cout << "You have successfully logout, Have a nice day :) ";
            exit(0);
            }
            default:
            cout<<"please chose the right features available"<<endl;
            break;
        }
    return 0;
    }
}}
