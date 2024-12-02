#include<iostream>
using namespace std;
template <class T> 
T arr[10];
template <class T> class A{
    T len;
    T bre;
    public:
    A(){
        len =10.4;
        bre=10.5;

    }
    T area(){
        return len*bre;
    }

};
int main(){
    A<float> a;
    cout<<a.area()<<endl;
    return 0;

}