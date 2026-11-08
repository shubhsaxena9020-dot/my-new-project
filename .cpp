#include <iostream>
using namespace std;

class Student {
private:

    string name;
    int cuid;
    int rollNo;
    float marks[5];
    float total = 0;

public:
    void getData() {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter CUID: ";
        cin >> cuid;

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter marks in 5 subjects:\n";

        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
            total += marks[i];
        }
    }

    void display() {
        float percentage = total / 5;

        cout << "\n----- STUDENT RESULT -----\n";
        cout << "Name: " << name << endl;
        cout << "CUID: " << cuid << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Total Marks: " << total << "/500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result: PASS";
        else
            cout << "Result: BACK ";
    }
};

int main() {
    Student s;

    s.getData();
    s.display();

    return 0;
}
