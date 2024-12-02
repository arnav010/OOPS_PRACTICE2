#include <iostream>
using namespace std;
#include <string>

class Person {
private:
    string name;
    int age;

public:
    // Setter for name
    void setName(const string& newName) {
        name = newName;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for age
    void setAge(int newAge) {
        if(newAge >= 0) {  // Ensure age is valid
            age = newAge;
        } else {
           cout << "Invalid age!" << endl;
        }
    }

    // Getter for age
    int getAge() const {
        return age;
    }
};

int main() {
    Person person;

    // Using setter methods to set values
    person.setName("Rohan");
    person.setAge(45);

    // Using getter methods to get and print values
    cout << "Name: " << person.getName() <<endl;
    cout << "Age: " << person.getAge() << endl;

    
    person.setAge(-5);  // Will show "Invalid age!"
    
    return 0;
}
