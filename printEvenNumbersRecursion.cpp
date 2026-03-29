#include<iostream>
using namespace std;

// printing even number form 1 to N

void printEven(int n){

    if(n == 0){
        return ;
    }

    printEven(n-1);

    if(n % 2 == 0)
        cout<<n<<" ";
}

int main(){

    int n =25;

    printEven(n);

    return 0;
}