#include<iostream>
using namespace std;

double areaofRect(double len, double width){
    return len*width;
}
double areaofCircle(double r, double pi){
    return pi*r*r;
}
double areaofTriangle(double base , double height){
    return (base*height)/2;
}
int main() {
    int area,len,width,r,base,height =0;
     double pi=3.14;
    
    cout<<"Enter the Value of Length and width: "<<endl;
    cin>>len>>width;
    cout<<"The area Of Rectangle is: "<< areaofRect(len,width)<<endl;
    
    cout<<"Enter the Value of Radius: "<<endl;
    cin>>r;
    cout<<"The area Of circle is: "<< areaofCircle(r,pi)<<endl;
    
    cout<<"Enter the Value of Base and Height: "<<endl;
    cin>>base>>height;
    cout<<"The area Of Triangle is: "<< areaofTriangle(base,height)<<endl;
    
    return 0;
}