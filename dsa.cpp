#include<iostream>
using namespace std;
int main(){
    int b, l;
    cout<<"Enter the breadth of the rectangle: "<< endl;
    cin>>b;
    cout<<"Enter the length of the rectangle: "<< endl;
    cin>>l;
    if(l/b >= 1.6 && l/b <= 1.7){
        cout<<"It is a silver rectangle.";
    }
    else{
        cout<<"It is not a silver rectangle."<<endl;
    }
    return 0;
}