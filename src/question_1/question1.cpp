#include "question1.h"

string gpa_to_letter_grade(double grade_point)
{
    string letter_grade = " ";
    
     if (grade_point >= 0 && grade_point <= 0.99)
    {
        letter_grade = "F";
    }
    else if (grade_point >= 1 && grade_point <= 1.99)
    {
        letter_grade = "D";
    }
    else if (grade_point >= 2 && grade_point <= 2.99)
    {
        letter_grade = "C";
    }
    else if (grade_point >= 3 && grade_point <= 3.49)
    {
        letter_grade = "B";
    }
    else if (grade_point >= 3.5 && grade_point <= 4)
    {
        letter_grade = "A";
    }
    else
    {
        letter_grade = "error";
    }
    
    
    return letter_grade;
}