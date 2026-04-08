#include<iostream>
using namespace std;
class Space{
    int x,y,z;
    public:
    void getData(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
    void display(){
        cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
    }
    void operator-(){
        x=-x;
        y=-y;
        z=-z;
    }
};
int main(){
    Space s;
    s.getData(10,-20,30);
    cout<<"Before: ";
    s.display();
    -s;
    cout<<"After: ";
    s.display();
    
    return 0;

}