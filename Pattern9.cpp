#include<iostream>
using namespace std;
int main(){

    int rows;
    cout<<"Enter number of rows :";
    cin>>rows;
    int colms;
    cout<<"Enter number of coloumns :";
    cin>>colms;
    int i=0;

    while(i<=rows){
        int j=1;
        char val='A'+i;
        while(j<=colms){
            cout<<val;
            val++;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    return 0;
}