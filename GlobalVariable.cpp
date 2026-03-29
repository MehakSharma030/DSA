#include<iostream>
using namespace std;
int global=10;

void A(int &val){
    //accessing global variable inside fucntions
    cout<<"Fucntion 1 : "<<global<<endl;
}

void B(int &val){
    cout<<"Function 2 : "<<global<<endl;
}

int main(){
    //accessing global varibale inside main
    cout<<"main : "<<global<<endl;
    int i=5;
    A(i);
    B(i);
    return 0;
}