#include<iostream>
using namespace std;

class Time{
    int h; 
    int m;
    public:
    Time(){

    }
    Time(int h,int m){
        this->h=h;
        this->m=m;
    }
    void display() {
        cout<<h<<"::"<<m<<endl;
    }
    friend Time operator + (Time t1, Time t2);
// Time operator +(Time t) {
//     Time temp;
//     temp.h=this->h + t.h;
//     temp.m=this->m + t.m;
//     return temp;

// }

};
Time operator +(Time t1,Time t2) {
       Time temp; 
       temp.h = t1.h + t2.h; 
       temp.m = t1.m + t2.m; 
        while(temp.m>=60){
            temp.h++;
          temp.m=temp.m-60;
        }
     return temp; 
      }

int main () {
    Time t1(5,70);
    Time t2(2,80);
    Time t3=t1+t2;
    t3.display();
}