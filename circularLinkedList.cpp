#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }

    ~Node(){
        int data=this->val;
        if(next != NULL){
            delete next;
            next=NULL;
        }
        cout<<"             memory is free for the value of "<<data<<endl;
    }
};

void insert(Node* &tail,int element,int val){
    // if initially the list is empty
    if(tail == NULL){
        Node* newNode=new Node(val);
        tail=newNode;
        newNode->next=newNode;
    }
    // assuming element is present in the linked list
    else{
        Node* temp=tail;
        while(temp->val != element){
            temp=temp->next;
        }
        Node* newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }
}

void print(Node* & tail){
    Node* temp=tail;
    if(tail == NULL){
        cout<<"the list you are trying to get access of IS EMPTY"<<endl;
        return;
    }
    do{
        cout<<tail->val<<" ";
        tail=tail->next;
    }while(tail != temp);
    cout<<endl;
}

void deleteByValue(Node* &tail,int target){
    // if the list is empty
    if(tail == NULL){
        cout<<"The linked lsit you are trying to access is empty";
        return;
    }
    // if the list is non-empty
    Node* curr=tail;
    Node* prev=NULL;
    while(curr->val != target){
        prev=curr;
        curr=curr->next;
    }
    // if the list has only one node
    if(tail == curr){
        tail=NULL;
        return;
    }
    
    prev->next=curr->next;
    // checking if tail is pointing to curr 
    if(curr == prev){
        tail=prev;
    }
    curr->next=NULL;
    delete curr;
}


int main(){

    Node* tail=NULL;

    insert(tail,1000,10);
    print(tail);

    insert(tail,10,20);
    print(tail);

    insert(tail,20,30);
    print(tail);

    insert(tail,30,40);
    print(tail);

    insert(tail,40,50);
    print(tail);
    
    insert(tail,50,60);
    print(tail);

    deleteByValue(tail,30);
    print(tail);

    deleteByValue(tail,60);
    print(tail);

    return 0;
}