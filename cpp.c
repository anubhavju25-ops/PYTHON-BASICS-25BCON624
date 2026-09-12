#include <iostream>
#include <string>
using namespace std;

class Student {
    int roll;
    string name;
    float m1, m2, m3;

public:
    // Default constructor that takes input
    Student() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void display() {
        float total = m1 + m2 + m3;
        float avg = total / 3.0;
        float percentage = (total / 300.0) * 100;

        cout << "\n--- Student Details ---\n";
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Average: " << avg << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Student s;
    s.display();
    return 0;r
}
