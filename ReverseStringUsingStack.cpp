#include<iostream>
#include<stack>
using namespace std;

int main(){

    string str="mehak sharma";

    stack<char> s;
    // adding elements into the stack
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        s.push(ch);
    }
    cout<<endl<<"original string : "<<str<<endl;

    // accessing elements from the stack nd storing it in a string variable
    string ans="";
    while(!s.empty()){
        char top=s.top();
        ans.push_back(top);
        s.pop();
    }

    cout<<endl<<"reversed string is : "<<ans<<endl;

    return 0;
}