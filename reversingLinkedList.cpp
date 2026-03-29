#include<iostream>

using namespace std;

class Node{
    public:
    int val;
    Node* nextptr;

    // initialise using constructor 
    Node(int val){
        this->val=val;
        this->nextptr=NULL;
    }

    // destructor for clearing dynamically created memory
    ~Node(){
        int data=this->val;
        if(this->nextptr != NULL){
            delete nextptr;
            this->nextptr=NULL;
        }
        cout<<"         memory free for the value "<<data<<endl;
    }

};

// inserting a new node at head in the linked list
void insertAtHead(Node* &head,int val){
    Node* temp=new Node(val);
    temp->nextptr=head;
    head=temp;
}

// printing the node
void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp=temp->nextptr;
    } 
}

// reversing using iterative method
void reverse(Node* &head){
    Node* curr=head;
    Node* prev=NULL;
    Node* frwd=NULL;
    while(curr != NULL){
        frwd=curr->nextptr;
        curr->nextptr=prev;
        prev=curr;
        curr=frwd;
    }
    head=prev;
}

int main(){

    Node* obj=new Node(10);
    Node* head=obj;
  
    insertAtHead(head,20); 
    insertAtHead(head,30);
    insertAtHead(head,40); 
    insertAtHead(head,50); 
    insertAtHead(head,60); 
    insertAtHead(head,70); 

    cout<<endl;
    cout<<"original list -> ";
    print(head);

    cout<<endl;
    cout<<"reversed list -> ";
    reverse(head);
    print(head);

    return 0;
}