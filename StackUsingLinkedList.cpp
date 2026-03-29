
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class stk{
    private:
    Node *top;
    int size; // size denotes the current size of the linked list

    public:
    stk(){
        top=NULL;
        size=0;
    }

    // push an elem
    void push(int elem){
        Node* temp=new Node(elem);
        temp->next=top;
        top=temp;
        size++;
    }
    // pop an elem
    void pop(){
        Node* temp=top;
        top=top->next;
        temp->next=NULL;
        delete temp;
        size--;
    }
    // get peek elem of stack
    void peek(){
        cout<<"Top element -> "<< top->data <<endl; 
    }
    // get size of stack
    void get_size(){
        cout<<"size of stack -> "<<size<<endl;
    }
    // check for empty stack ?
    bool isEmpty(){
        if(top == NULL){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    stk s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.get_size();
    s.peek();
    s.pop();

    s.peek();
    s.pop();
    s.peek();

    if(s.isEmpty()){
        cout<<"stack is empty !!! "<<endl;
    }
    else{
        cout<<"stack is not empty !!!"<<endl;
    }
    return 0;
}