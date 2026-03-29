#include<iostream>
using namespace std;

void update1(int n){
    n++;
    cout<<"value inside function : "<<n<<endl;
}

void update2(int &n){
    n++;
    cout<<"value inside function : "<<n<<endl;
}

int main(){

    int i=10;

    cout<<endl;
    cout<<"Pass by value "<<endl;
    update1(i);
    cout<<"value inside main "<<i<<endl;

    cout<<endl;
    cout<<"Pass by refrence "<<endl;
    update2(i);
    cout<<"value inside main "<<i<<endl;
    cout<<endl;

    return 0;
}