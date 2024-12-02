
#include <iostream>
#include <string>

using namespace std;


class Person {
public:
    
    string name;
    int age;

    
    void introduce()
    {
        cout << "Hi, my name is " << name << " and I am "
             << age << " years old." << endl;
    }
};

int main()
{
    
    Person person1;

    
    person1.name = "Alice";
    person1.age = 30;

    
    person1.introduce();

    return 0;
}
