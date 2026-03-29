#include<iostream>
using namespace std;

int main(){
    const int num=5;
    cout<<"Constant number is  : "<<num;
    cout<<endl;
    // num++ -> will return in an error bcs we can't chnge the value of a constant member fucntion
    return 0;
}