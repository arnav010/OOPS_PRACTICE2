#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    int age;
    float marks;
};

int main() {
    // Array of 10 Student structures
    Student students[10] = {
        {101, "John ", 20, 85.5},
        {102, " Smith", 21, 90.0},
        {103, "Rohan", 22, 78.2},
        {104, "Bunny", 19, 88.7},
        {105, "Sunny", 20, 92.1},
        {106, "Virat", 21, 76.5},
        {107, "Rohit", 22, 84.3},
        {108, "Sam ", 20, 80.5},
        {109, "Ravi", 19, 91.2},
        {110, "Michael", 22, 89.8}
    };

    // Display the details of all students
    cout << "Student Details:" <<endl;
    cout << "Roll No\tName\tAge\tMarks" << endl;
    cout << "----------------------------------------" <<endl;

    for (int i = 0; i < 10; ++i) {
        cout << students[i].rollNo << "\t" 
                  << students[i].name << "\t" 
                  << students[i].age << "\t" 
                  << students[i].marks << endl;
    }

    return 0;
}
