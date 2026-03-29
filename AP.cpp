#include<iostream>
using namespace std;
int AP(){
    int n;
    cout<<"Enter the number of term :";
    cin>>n;
    int val=(3*n)+7;
    return val;
}
int main(){
    int nth_term=AP();
    cout<<"Value of term is : "<<nth_term<<endl;
    return 0;
}