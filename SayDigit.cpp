#include<iostream>
using namespace std;       

void sayDigit(int n){

    string arr[10]={"Zero" , "One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine" };
    if(n == 0){
        return;
    }

    int digit=n % 10;
    n=n / 10;

    sayDigit(n);
    cout<<arr[digit]<<" ";
}

int main(){
    int n=589900234;
    cout<<endl;

    cout<<"Say digits for the number "<<n<<" is -> ";
    sayDigit(n);
    
    cout<<endl;
    return 0;
}