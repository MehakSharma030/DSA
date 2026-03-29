#include<iostream>
using namespace std;

bool isPalindrome(string str , int i , int j){

    if(i > j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }

    return isPalindrome(str , i+1 , j-1);

}

int main(){

    string str="abc";
    int size=str.length();
    int i=0;
    int j=size-1;

    bool ans=isPalindrome(str,i,j);

    if(ans){
        cout<<endl<<"The string "<<str<<" is a palindrome"<<endl;
    }

    else{
        cout<<endl<<"The string "<<str<<" is not a palindrome"<<endl;
    }
   
    return 0;
}