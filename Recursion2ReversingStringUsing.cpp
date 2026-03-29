#include <iostream>
using namespace std;

string rev_str( string s , int i , int size ){
    
    if(i > (size-i-1)){
        return s;
    }

    swap( s[i] , s[size-i-1] );

    return rev_str( s , i+1 , size);

}

int main(){

    string str="abcde";
    int size=str.length();
    cout<<endl<<"Original String : "<<str<<endl;
   
    int i=0;

    string rev=rev_str(str,i,size);
    cout<<endl<<"Reversed String : "<<rev<<endl;

    return 0;

}
