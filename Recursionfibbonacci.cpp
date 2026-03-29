#include<iostream>
using namespace std;

int fib(int n) {
        
    if(n == 0) {
        return 1;
    }

    if(n == 1) {
        return 1;
    }

    return fib(n-1) + fib(n-2);

}

int main(){

    int n=5;
    int val=fib(5);
    cout<<"Term number "<<n<<" of fibbonacci series is : "<<val<<endl; 
    return 0;
}