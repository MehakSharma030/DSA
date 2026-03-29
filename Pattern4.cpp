#include<iostream>
using namespace std;
int main(){
    int rows;
    int colms;
    cout<<"Enter number of rows :";
    cin>>rows;
    cout<<"Enter number of coloumns :";
    cin>>colms;
    int i=1;
    
    int count=1;
    while(i<=rows){
        int j=1;
        while(j<=colms){
            cout<<count<<" ";
            count++;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    return 0;
}