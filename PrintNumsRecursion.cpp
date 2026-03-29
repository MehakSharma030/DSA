#include<iostream>
using namespace std;

void printNum(int n){

    if(n == 0){
        return;
    }

    // for printing N to 1
    cout<<n<<" ";

    printNum(n-1);
    
    // for printing 1 to N
    cout<<n<<" ";

}

int main(){

    int n=30;
    printNum(n);

    return 0;
}