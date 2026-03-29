#include<iostream>
using namespace std;

int main(){

    int i=10;
    int &j=i;

    cout<<"Inital values "<<endl;
    cout<<"i -> "<<i<<endl;
    cout<<"j -> "<<j<<endl;
    
    i++;
    cout<<"After increasing i : "<<endl;
    cout<<"i -> "<<i<<endl;
    cout<<"j -> "<<j<<endl;

    j++;
    cout<<"After incresing j : "<<endl;
    cout<<"i -> "<<i<<endl;
    cout<<"j -> "<<j<<endl;
    
    cout<<endl;
    cout<<"&i -> "<<&i<<endl;
    cout<<"&j -> "<<&j<<endl;
    

    return 0;
}