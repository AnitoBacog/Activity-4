#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> grades(4);
    double sum = 0;

    for (int i = 0; i < 4; ++i) {
        double grade;
        cout << "Enter grade for quarter " << i + 1 << " (0-100): ";
        cin >> grade;

        // Input validation
        while (grade < 0 || grade > 100) {
            cout << "Invalid grade. Please enter a grade between 0 and 100: ";
            cin >> grade;
        }
        grades[i] = grade;
        sum += grade;
    }

    double average = sum / 4;
    cout << "The average grade is: " << average << endl;

    return 0;
}
