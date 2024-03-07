#include "question2.h"

string decimal_to_hex(int value)
{
    string hex;
    string hex_menu = "0123456789ABCDEF";
    
    while (value > 0) 
    {
        int remainder = value % 16;
        hex = hex_menu[remainder] + hex;
        value /= 16;
    }
    
    return hex;
}