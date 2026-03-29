#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter number of rows :";
    cin>>rows;
    int i=1;
    
    while(i<=rows){
        int j=1;
        int count=i;
        while(j<=i){
            cout<<count;
            count--;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    return 0;
}