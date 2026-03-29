#include<iostream>
using namespace std;
int main(){
    int array[10];
    cout<<"Array elements are :"<<endl;
    cout<<"[ ";
    fill(array,array+10,5);
    for(int i=0;i<10;i++){
        cout<<array[i]<<" , ";
    }
    cout<<" }";
   return 0;
}