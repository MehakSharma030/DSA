#include<iostream>
#include<stack>
using namespace std;

int main(){

    // creating a stack
    stack<int> stk;

    cout<<endl;
    // adding elements in the stack
    stk.push(10);
    stk.push(15);
    stk.push(20);
    stk.push(25);

    cout<<endl;
    // printing the size of stack
    cout<<"size of stack -> "<<stk.size()<<endl;

    cout<<endl;
    // prinit the top elements of the stack
    cout<<"top element -> "<<stk.top()<<endl;

    cout<<endl;
    // deleting elements from the stack
    int temp=stk.top();
    stk.pop();
    cout<<"deleted element is : "<<temp<<endl;
    cout<<"size of stack -> "<<stk.size()<<endl;

    cout<<endl;
    temp=stk.top();
    stk.pop();
    cout<<"deleted element is : "<<temp<<endl;
    cout<<"size of stack -> "<<stk.size()<<endl;
    
    cout<<endl;
    // chcking stack is emmpty or not 
    if(stk.empty()){
        cout<<"the stack is empty"<<endl;
    }
    else{
        cout<<"the stack is not empty"<<endl;
    }


    cout<<endl;
    cout<<endl;
    stack<string> s;
    s.push("Mehak");
    s.push("Sharma");
    s.push("New");
    cout<<"Top element of stack is : "<<s.top()<<endl;

    string del=s.top();
    s.pop();
    cout<<"The dleted elemnt is : "<<del<<endl;
    cout<<"Top element of stack is : "<<s.top()<<endl;
    cout<<"Size of stack is :"<<s.size()<<endl;
    cout<<"to chck stack is empty or not : "<<s.empty()<<endl;
    cout<<endl;
    
    return 0;
}