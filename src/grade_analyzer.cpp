#include "grade_analyzer.hpp"
#include <iostream>

using namespace std;

double calculateTotal(double score1, double score2, double score3) 
{
    return score1 + score2 + score3 ;
}

double calculateAverage(double total, int count) 
{

    if (count <= 0) 
    {
        
    return 0.0;
    }
return total / count ;
}

char determineLetterGrade(double average) {

if (average >= 90) { return 'A';}

else if (average >= 80) {return 'B';}

else if (average >= 70) {return 'C';}

else if (average >= 60) {return 'D';}

else
{return 'F';}
}

bool isPassing(double average) {

    if (average >= 70) {return true;}
    else {
    return false;
}
}

bool isValidScore(double score) 

  {
        if (score >= 0 && score <= 100) {return true;}
        else 
        {return false;

    }
  }

void printGradeReport(double total, double average, char letterGrade, bool passing) {
    cout << endl;
    cout << "Grade Report" << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Letter Grade: " << letterGrade << endl;

    if (passing) {
        cout << "Status: Passing" << endl;
    } else {
        cout << "Status: Not Passing" << endl;
    }
}   //Jaime: Just erased all the teacher' comments, so that only the code's structure and functionality are visible, also, i moved some square brackets to make it more visible which part of the code is located between those brackets
