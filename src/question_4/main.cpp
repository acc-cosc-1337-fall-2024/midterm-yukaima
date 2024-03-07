#include <iostream>
#include "question4.h"
#include <vector>

using std::cout;
using std::cin;
using std::vector;




int main() 
{
    int cookies;
    vector<double>ingredients;

    char choice ;

    do
    {
     

        cout<<"\nThe number of cookies(integer):";
        cin>>cookies;

        ingredients = get_cookie_ingredients(cookies);

        cout<<"\nTo make "<<cookies<<" cookies, we need: "<<"\n";
        cout << "Cups of Sugar: " << ingredients[0] << "\n";
        cout << "Cups of Butter: " << ingredients[1] << "\n";
        cout << "Cups of Flour: " << ingredients[2] << "\n";


        cout<<"\nDo you want to continue?(y/n):";
        cin>>choice;



    } while (choice == 'y');
    

    return 0;
}