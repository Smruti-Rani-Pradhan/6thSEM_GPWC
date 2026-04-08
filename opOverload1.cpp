#include<iostream>
using namespace std;
class Complex{
    float x,y;
    public:
    Complex(){}
    Complex(float real,float imag){
        x=real;
        y=imag;
    }
    Complex operator+(Complex c){
        Complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
    }
     void display(){
        cout<<"x="<<x<<" y="<<y<<endl;
    }
};
    
int main(){
   Complex c1(2,3),c2(5,6),c3;
   c3=c1+c2;
   cout<<"c1: ";
   c1.display();
   cout<<"c2: ";
   c2.display();
   cout<<"c3(c1+c2): ";
   c3.display();
   return 0;
}