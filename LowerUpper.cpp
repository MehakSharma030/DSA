#include<iostream>
using namespace std;
int main(){

    char val;
    cout<<"Enter any character : ";
    cin>>val;
    
    for(char i='a';i<='z';i++){                                     
        if(val == i){
            cout<<"It's a lowercase character"<<endl;
            return 0;
        }
    }
    cout<<"It's an uppercase character"<<endl;

    return 0;
}