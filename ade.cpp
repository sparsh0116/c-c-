
#include<iostream>
using namespace std;
int main(){
    float LT,UT,R;
    for(int i=0;i<1654984;i++)
    {
    cout<<"Enter Voltage LT : ";
    cin>>LT;
    cout<<"Enter Voltage UT : ";
    cin>>UT;
    R = 43.33333 * ((LT+UT)/(UT-LT));
    cout<<"Resistance is : "<<R<<"\n"; 
    }
    return 0;
}