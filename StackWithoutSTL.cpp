#include<iostream>
using namespace std;

class stk{
    private:
        int *arr;
        int top;
        int size;
    public:

    // calling a constructor to intialise the size of the stack
    stk(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    // pushing an element
    void push(int elem){
        if(top == size-1){ // or if( size - top > 1 )
            cout<<"Overflow"<<endl;
            return;
        }

        else{
            top++;
            arr[top]=elem;
        }
    }

    // popping an element
    void pop(){
        if(top == -1){
            cout<<"Underflow"<<endl;
            return;
        }
        else{
            top--;
        }
    }

    // size of stack
    void stk_size(){
        cout<<"size -> "<<top+1<<endl;
    }

    // checking the array is empty or not 
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    // checking top element of the stack
    int peek(){
        if(top == -1){
            return -1;
        }
        else{
            return arr[top];
        }
    }

};

int main(){
    stk s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    int elem=s.peek();
    cout<<"top elem -> "<<elem<<endl;
    s.pop();

    elem=s.peek();
    cout<<"top elem -> "<<elem<<endl;

    s.stk_size();
    if(s.isEmpty()){
        cout<<"The stack is empty"<<endl;
    }
    else{
        cout<<"The stack is not empty"<<endl;
    }


    return 0;
}