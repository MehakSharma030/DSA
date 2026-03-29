#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int count=0;
    for (int i = 2; i < num ; i++)
    {
        if(num%i == 0){
            count++;
            break;
        }
    }
    if(count != 0){
        cout<<"It's not a prime number";
    }
    else{
        cout<<"It's a prime number";
    }
    
    return 0;
}