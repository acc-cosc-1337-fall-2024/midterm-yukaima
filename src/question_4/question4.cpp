#include "question4.h"
//
vector<double> get_cookie_ingredients(int cookies)
{
    const double sugar_per_cookie = 1.5 / 48;  
    const double butter_per_cookie = 1.0 / 48; 
    const double flour_per_cookie = 2.75 / 48;

    double sugar = cookies * sugar_per_cookie;
    double butter = cookies * butter_per_cookie;
    double flour = cookies * flour_per_cookie;

    vector<double>ingredients = {sugar,butter,flour};

    
    return ingredients;
}