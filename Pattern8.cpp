#include<iostream>
using namespace std;
int main(){

    int rows;
    cout<<"Enter number of rows :";
    cin>>rows;
    int i=1;

    while(i<=rows){
        int j=1;
        char val='A'+rows-i;
        while(j<=i){
            cout<<val;
            val++;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    return 0;
}