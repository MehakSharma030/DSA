#include<iostream>
using namespace std;

char getMaxOccuringChar(string& s) {
    //  code here
    int len=s.length();
    int ans=0;
    int maxim=0;
           
    int arr[26]{0};
           
    for(int i=0;i<len;i++){
        char ch=s[i];
        int number=ch-'a'; // will give the index number
        arr[number]++;
    }
           
    for(int i=0;i<26;i++){
        if(arr[i] > maxim){
            ans=i;
            maxim=arr[i];
        }
    }
    return ans+'a';// wil return the alphabet
}

int main(){
    string str;
    cout<<"Enter any string : ";
    getline(cin,str);

    char ch=getMaxOccuringChar(str);
    cout<<"the maximum occuring charater in the given string is : "<<ch;
    return 0;
}