#include<iostream>
using namespace std;

class A{
    int x,y;
    public:
    A(int x,int y) {
        this->x=x;
        this->y=y;
    }

operator int () const {
    return x+y;
}
};
int  main () {
    A a1(10,12);
    int res=a1;//implicit typecasting 
    cout<<a1;//here doing cout the object will not show any error because in 18th line object can be converted into a single another object
}