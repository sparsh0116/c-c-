#include<iostream>
using namespace std;
class Sum{
    public:
    int a;
    int b;
    int c;
    Sum(){
        a = 3;
        b = 5;
        c=a+b;
    }
    Sum( int x, int y){
        a = x;
        b = y;
        c=a+b;
    }
    void display(){
        cout<<c;
    }
};

int main(){
    Sum obj1();
    obj1.display();
    
    return 0;
}