#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *prev;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

    // free up memory created dynamically
    ~Node(){
        int data=this->val;
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"         memory free up for the value "<<data<<endl;
    }

};

// traversing the whole list
void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// inserting value at head
void insertAtHead(Node* &head,int val){

    //if initially the linked list is empty
    if(head == NULL){
        Node* temp=new Node(val);
        head=temp;
        temp->next=NULL;
        temp->prev=NULL;
        return;
    }

    Node* newNode=new Node(val);
    newNode->next=head;
    newNode->prev=NULL;
    head->prev=newNode;
    head=newNode;
}

// inserting at last posiition
void insertAtTail(Node* &head,int val){

    //if initially the linked list is empty
    if(head == NULL){
        Node* temp=new Node(val);
        head=temp;
        temp->next=NULL;
        temp->prev=NULL;
        return;
    }

    Node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    newNode->next=NULL;
    newNode->prev=temp;
}

// inserting at any given position
void insert(Node* &head,int position,int value){
    Node* temp=head;
    int count=1;
    if(position == 1){
        insertAtHead(head,value);
        return ;
    }

    while(count != position-1){
        temp=temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(head,value);
        return;
    }
    else{
        Node* newNode=new Node(value);
        newNode->next=temp->next;
        temp->next->prev=newNode;
        temp->next=newNode;
        newNode->prev=temp;
    }
}

void deleteNodeByPosition(Node* head,int position){
    Node* temp=head;
    if(position == 1){
        head=head->next;
        temp->next->prev=NULL;
        temp->next=NULL;
        delete temp;
    }

    else{
        int count=1;
        Node* prev=NULL;;
        Node* curr=head;
        while(count != position-1){
            prev=curr;
            curr=curr->next;
            count++;
        }
       
        prev->next=curr->next;
        curr->prev=NULL;
        curr->next=NULL;
        delete curr;
    }
}

void deleteNodeByValue(Node* &head,int target){
    Node* temp=head;

    // if the target is at head node
    if(temp->val == target){

        head = head->next;

        if(temp->next != NULL){
            temp->next->prev=NULL;
        }

        temp->next=NULL;
        delete temp;
        return;
    }

    else{
        Node* prev1=NULL;

        while(temp != NULL && temp->val != target){
            prev1=temp;
            temp=temp->next;
        }

        if(temp == NULL) return;

        // if the target is at the last node 
        if(temp->next == NULL){
            temp->prev->next=NULL;
            temp->prev=NULL;
            delete temp;
            return;
        }
        
        // if the target value is at any other position
        prev1->next=temp->next;
        temp->next->prev=prev1;
        temp->next=NULL;
        temp->prev=NULL;
        delete temp;
    }
}

int main(){

    Node* obj=new Node(40);
    Node* head=obj;
    print(head);

    insertAtHead(head,30);
    print(head);

    insertAtHead(head,20);
    print(head);

    insertAtHead(head,10);
    print(head);

    insertAtTail(head,50);
    print(head);
    
    insertAtTail(head,60);
    print(head);
    
    insertAtTail(head,70);
    print(head);

    insert(head,3,100);
    print(head);

    insert(head,5,100);
    print(head);

    deleteNodeByPosition(head,3);
    print(head);

    deleteNodeByValue(head,10);
    print(head);

    return 0;
}