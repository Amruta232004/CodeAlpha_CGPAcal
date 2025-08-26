CGPA Calculator Code in C++
#include <iostream>
using namespace std;

int main() {
    int n;
    float grade, credit, totalPoints = 0, totalCredits = 0;

    cout << "Enter number of subjects: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nEnter grade point for subject " << i << ": ";
        cin >> grade;

        cout << "Enter credit for subject " << i << ": ";
        cin >> credit;

        totalPoints += grade * credit;
        totalCredits += credit;
    }

    float cgpa = totalPoints / totalCredits;
    cout << "\nYour CGPA is: " << cgpa << endl;

    return 0;
}
