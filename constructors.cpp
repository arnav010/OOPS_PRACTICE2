#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // 1. Default Constructor
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default Constructor called!" << endl;
    }

    // 2. Parameterized Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Parameterized Constructor called!" << endl;
    }

    // 3. Copy Constructor
    Rectangle(const Rectangle& rect) {
        length = rect.length;
        width = rect.width;
        cout << "Copy Constructor called!" << endl;
    }

    
    void display() const {
        cout << "Length: " << length << ", Width: " << width <<endl;
    }
};

int main() {
    // Using the Default Constructor
    Rectangle rect1;
    rect1.display();

    // Using the Parameterized Constructor
    Rectangle rect2(10, 5);
    rect2.display();

    // Using the Copy Constructor
    Rectangle rect3 = rect2;
    rect3.display();

    return 0;
}
