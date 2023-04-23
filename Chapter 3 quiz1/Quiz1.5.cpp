#include <iostream>
using namespace std;

int main() {
    int mark1, mark2, mark3,mark4,mark5;
    float total, average;
    string status;

    cout << "Enter three course marks: \n";
    cin >> mark1 >> mark2 >> mark3>>mark4>>mark5;

    total = mark1 + mark2 + mark3 + mark4 + mark5;
    average = total / 5;

    cout << "Total marks: " << total << endl;
    cout << "Average mark: " << average << endl;

    if (average >50) {
        status = "Pass";
    }
    else {
        status = "Fail";
    }

    cout << "Status: " << status << endl;

    return 0;
}
