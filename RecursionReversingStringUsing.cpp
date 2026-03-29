#include<iostream>
using namespace std;

string rev_str( string s , int i , int j ){

    if(i > j){
        return s;
    }

    swap( s[i] , s[j] );

    return rev_str( s , i+1 , j-1 );

}

int main(){

    string str="abcdefghijklmnopqrstuvwxyz";
    int size=str.length();
    cout<<endl<<"Original String : "<<str<<endl;

    int i=0;
    int j=size-1;

    string rev=rev_str(str,i,j);
    cout<<endl<<"Reversed String : "<<rev<<endl;

    return 0;

}