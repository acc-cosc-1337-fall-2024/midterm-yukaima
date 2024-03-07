#include <iostream>
#include "question2.h"
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() 
{
    int num;
    string hex;
    char choice ;

    do
    {
     

        cout<<"\nPlease enter an integer number (1-512):";
        cin>>num;

        if (num >= 1 && num <= 512)
        {
            hex = decimal_to_hex(num);
            cout<<"\n"<<"Hexadecimal number is "<<hex<<"\n";
        }
        else
        {
            hex = "Invalid number. Please enter a number between 1 and 512.";
            cout<<"\nhex\n";
        }

        cout<<"\nDo you want to continue?(y/n):";
        cin>>choice;


    } while (choice == 'y');
    

    return 0;
}