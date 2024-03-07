#include <iostream>
#include <string>
#include "question3.h"

using std::cout;
using std::cin;
using std::string;




int main() 
{
    int decimal;
    string binary;
    char choice ;

    do
    {
     
        cout<<"\nPlease enter an 8 character length binary only contained 0 and 1 :";
        cin>>binary;

        bool validate = true;

        if (binary.length() != 8) 
        {
            cout<<"\n invalid binary, please enter an 8 character length binary only contained 0 and 1.\n";
            validate = false;
        } 
        else 
        {
            for (char character : binary) 
            {
                if (character != '0' && character != '1') 
                {
                    cout<<"\n invalid binary, please enter an 8 character length binary only contained 0 and 1.\n";
                    validate = false;
                    break;
                }
                
            }
        }

        if (validate)
        {
            decimal = binary_to_decimal(binary);
            cout<<"Decimal number : "<<decimal<<"\n";
        }
        

        cout<<"\nDo you want to continue?(y/n):";
        cin>>choice;


    } while (choice == 'y');
    

    return 0;
}