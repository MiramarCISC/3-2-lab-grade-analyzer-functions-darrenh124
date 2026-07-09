#include "grade_analyzer.hpp"
#include <iostream>

using namespace std;

int main() {
    double score1 = 0.0;
    double score2 = 0.0;
    double score3 = 0.0;

    cout << "Grade Analyzer" << endl;
    cout << endl;

    do {
    cout << "Enter score 1: ";
    cin >> score1;

    if (!isValidScore(score1)) {
        cout << "Invalid score. Enter a score from 0 to 100: " << endl;
    }
} while (!isValidScore(score1));

    do {
    cout << "Enter score 2: ";
    cin >> score2;

    if (!isValidScore(score2)) {
        cout << "Invalid score. Enter a score from 0 to 100: " << endl;
    }
} while (!isValidScore(score2));
do {
    cout << "Enter score 3: ";
    cin >> score3;

    if (!isValidScore(score3)) {
        cout << "Invalid score. Enter a score from 0 to 100: " << endl;
    }
 } while (!isValidScore(score3));


    double total = calculateTotal(score1, score2, score3);
    double average = calculateAverage(total, 3);
    char letterGrade = determineLetterGrade(average);
    bool passing = isPassing(average);

    printGradeReport(total, average, letterGrade, passing);

    return 0;
}
