#include<iostream>
using namespace std;

void printCounting(int n) 
{
    if(n == 0){
        return ;
    }
    cout<<n<<" " ;
    printCounting(n-1) ; 
}

int main(){

    int max_value;
    cout<<"Enter the number upto which you want to print the counting  : " ;
    cin>>max_value;

    cout<<"The counting is : " ;
    printCounting(max_value) ;
    
    return 0;
}