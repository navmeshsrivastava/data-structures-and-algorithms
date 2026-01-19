#include <iostream>
using namespace std;

int main() {

    // ===============================
    // SIMPLE IF STATEMENT
    // ===============================
    int age = 20;

    if (age >= 18) {
        cout << "Eligible to vote" << endl;
    }

    // ===============================
    // IF - ELSE STATEMENT
    // ===============================
    int number = -5;

    if (number >= 0) {
        cout << "Number is non-negative" << endl;
    } else {
        cout << "Number is negative" << endl;
    }

    // ===============================
    // IF - ELSE IF - ELSE LADDER
    // ===============================
    int marks = 72;

    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    } 
    else if (marks >= 75) {
        cout << "Grade: A" << endl;
    } 
    else if (marks >= 60) {
        cout << "Grade: B" << endl;
    } 
    else if (marks >= 40) {
        cout << "Grade: C" << endl;
    } 
    else {
        cout << "Grade: Fail" << endl;
    }

    // ===============================
    // COMBINED CONDITIONS (LOGICAL OPS)
    // ===============================
    int balance = 5000;
    bool hasATM = true;

    if (balance >= 1000 && hasATM) {
        cout << "Cash withdrawal allowed" << endl;
    } else {
        cout << "Cash withdrawal denied" << endl;
    }

    return 0;
}
