#include<iostream>
using namespace std;
// <<insertion operator
// >>extraction operator
// ostream class includes the cout function
// istream class includes the cin function 

class A{
    int x,y;
    public:
    A() {

    }
    A(int x, int y) {
        this->x=x;
        this->y=y;
    }
    void display() {
        cout<<x<<""<<y<<endl;
    }
    friend ostream& operator <<(ostream &o1,A a1);
};
ostream& operator <<(ostream &o1,A a1) {
        o1<<a1.x;
        o1<<a1.y;
        return o1;
    }
int main () {
    A a1(5,10);
    cout<<a1;
    return 0;
}