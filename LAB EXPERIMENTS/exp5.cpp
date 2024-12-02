#include<iostream>
using namespace std;

class Student{
    string name;
    int roll_no;
    float marks;
    public:

    Student (){ // default
        name =" ";
        roll_no= 0;
        marks=0.0;
    }

    Student(string name ,int roll_no, float marks) { // parameterized
        this->name=name;
        this->roll_no=roll_no;
        this->marks=marks;
    }
    Student(Student &s2){
        name = s2.name;
        roll_no = s2.roll_no;
        marks= s2.marks;
    }
    void set(string n,int r, float m){
        name =n;
        roll_no =r;
        marks = m;

    }
    string getname(){
        return name;
    }
    int getroll_no() {
        return roll_no;
    }
    float getmarks(){
        return marks;
    }

    };
   
int main() {
   
    Student s1("rohan",34,67);
    Student s2=s1;
    cout<<s1.getname()<<endl;
    cout<<" "<<s2.getname();

return 0;
}
