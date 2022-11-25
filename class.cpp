#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no;
    void assign(){
        cout<<name<<endl<<roll_no<<endl;
    }
};
int main(){
    student s1;
    s1.name = "Sparsh";
    s1.roll_no = 167;
    s1.assign();
    return 0;
}