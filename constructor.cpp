#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    student( string x, int y){
        name = x;
        roll = y;
        display();
    }
    void display(){
        cout<<name<<endl<<roll;
    }
};
int main(){
    student s( "sparsh", 167);

}