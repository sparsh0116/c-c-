#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> g1;
    for(int i=1; i<=5; i++){
        g1.push_back(i);
    }

    cout<<"The output for begin and end is: ";
    for(auto i=g1.begin(); i!=g1.end(); i++){
        cout<< *i<< " ";
    }
    cout<<endl;
    cout<<"The output of rbegin and rend are: ";
    for(auto ir=g1.rbegin(); ir!=g1.rend(); ir++){
        cout<< *ir<<" ";
    }
    cout<<"The output of cbegin and cend are: ";
    for(auto ir=g1.cbegin(); ir!=g1.cend(); ir++){
        cout<< *ir<<" ";
    }
    return 0;
}