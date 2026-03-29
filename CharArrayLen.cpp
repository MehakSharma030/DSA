#include<iostream>
using namespace std;

void getLen(char arr[]){
    int i=0;
    int len=0;
    while(arr[i] != '\0'){
        len++;
        i++;
    }
    cout<<len;
}

int main(){
    char name[10];
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"The string is  :"<<name<<endl;
    cout<<"Length of string is : ";
    getLen(name);
    return 0;
}