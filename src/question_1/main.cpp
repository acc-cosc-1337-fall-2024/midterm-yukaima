#include <iostream>
#include "question1.h"
#include <string>


using std::cout;
using std::cin;
using std::string;


int main() 
{
    double gpa;
    string letter;
    char choice ;

    do
    {
     

        cout<<"\nYour GPA (0-4):";
        cin>>gpa;

        if (gpa >= 0 && gpa <= 4)
        {
            letter = gpa_to_letter_grade(gpa);
            cout<<"\n"<<"Your grade is "<<letter<<"\n";
        }
        else
        {
            letter = "Invalid GPA. Please enter a GPA between 0 and 4.";
            cout<<"\nletter\n";
        }

        cout<<"\nDo you want to continue?(y/n):";
        cin>>choice;



    } while (choice == 'y');
    

    return 0;
}