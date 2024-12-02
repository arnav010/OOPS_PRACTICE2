#include<iostream>
using namespace std;
#include<string>
class electricity{
    int k_no;
    string name;
    int unit;
    double bill;
      public:
        void get() {
            cout<<"Enter Details...."<<endl;
            cout<<"Enter K_number:"<<endl;
            cin>>k_no;
            cout<<"Enter customer's name:"<<endl;
            cin.ignore(); 
            getline(cin,name);
            cout<<"Enter the units consumed:"<<endl;
            cin>>unit;
        }
        void show() {
          cout<<"Entered Details are:"<<endl;
          cout<<"k number:"<<k_no<<endl;
          cout<<"Customer name:"<<name<<endl;
          cout<<"Units consumed:"<<unit<<endl;
          cout<<"Total bill:"<<bill<<endl;
        }    
        void calc_bill() {
          if(unit<=100) 
          bill=unit*1.5;
          else if (unit<=200)
          bill=(100*1.5)+(unit-200)*2;
          else 
          bill=(100*1.5) + (200*2) +(unit-300)*3;
        }
};
    
    int main() {
      electricity e;
      e.get();
      e.calc_bill();
      e.show();
      return 0;
    }