#include "question3.h"

int binary_to_decimal(string binary)
{

    int decimal = 0;
    int square = 1;

    for (int i = 7; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            int square_times = 7-i;
            while (square_times > 0)
            {
                square = square*2;
                square_times = square_times -1;
            }
            
            decimal = decimal + square;
            square = 1;

        }
        else
        {
            decimal = decimal;
        }
        
        
    }

    return decimal;
    
}