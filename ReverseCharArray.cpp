#include<iostream>
#include <cstring>
using namespace std;

void reverse(char arr[]){
    int i=0;
    int length=strlen(arr);
    int j=length-1;

    while(i < j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<arr;
}

int main(){
    char name[10];
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"The string is  :"<<name<<endl;
    cout<<"Reverse of string is : ";
    reverse(name);
    return 0;
}