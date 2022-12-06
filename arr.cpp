#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,6> ar; // Declaring 1st array
    array<int,0> ar1; // Declaring 2nd array
    ar1.empty()? cout << "Array empty": cout << "Array not empty";
    cout << endl; // Checking size of array if it is empty
    // Filling array with 0
    ar1.fill(0);
    cout << "Array after filling operation is : ";
    for ( int i=0; i<6; i++)
    cout << ar[i] << " ";
    return 0;
}