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

// inserting a new node at tail in the linked list
void insertAtTail(Node* &head,int val){
    Node* temp=head;
    while(temp->nextptr != NULL){
        temp=temp->nextptr;
    }
    Node* newNode=new Node(val);
    temp->nextptr=newNode;
    newNode->nextptr=NULL;
}

// inserting node at any postion 
void insertNode(Node* &head,int position,int val){

    // if position is start
    if(position == 1){
        insertAtHead(head,val);
        return;
    }


    Node* temp=head;
    int count=1;
    while(count != position-1){
        temp=temp->nextptr;
        count++;
    }

    // if insertion at last position
    if(temp->nextptr == NULL){
        insertAtTail(head,val);
        return;
    }

    Node* newNode=new Node(val);
    newNode->nextptr=temp->nextptr;
    temp->nextptr=newNode;
    
}

// printing the node
void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp=temp->nextptr;
    } 
}

// deleting a node by its position
void deleteNodeByPosition(int position,Node* &head){
    // deleting the first node
    if(position == 1){
        Node* temp=head;
        head=head->nextptr;
        // to free up the memory
        temp->nextptr=NULL;
        delete temp;
    }

    else{
        Node* curr=head;
        Node* prev=NULL;
        int count=1;
        while(count < position){
            prev=curr;
            curr=curr->nextptr;
            count++;
        }
        prev->nextptr=curr->nextptr;
        curr->nextptr=NULL;
        delete curr;
    }
    
}

// delete a node by its value
void deleteNodeByValue(int target,Node* &head){

    if(head->val == target){
        Node* temp=head;
        head=head->nextptr;
        temp->nextptr=NULL;
        delete temp;
    }
    else{   
        Node* curr=head;
        Node* prev=NULL;
        while(curr->val != target){
            prev=curr;
            curr=curr->nextptr;
        }
        prev->nextptr=curr->nextptr;
        curr->nextptr=NULL;
        delete curr;
    }

}

int main(){

    Node* obj=new Node(100);

    Node* head=obj;
    print(head);
   
    cout<<endl;
    insertAtHead(head,10); // inserting value 10 at head(start)
    print(head);

    cout<<endl;
    insertAtHead(head,5); // inserting value 5 at head(start)
    print(head);

    cout<<endl;
    insertAtTail(head,200); // inserting value 200 at tail(end)
    print(head);

    cout<<endl;
    insertAtTail(head,300); // inserting value 300 at tail(end)
    print(head);

    cout<<endl;
    insertNode(head,3,5000); // inserting 5000 at position 3
    print(head);

    cout<<endl;
    insertNode(head,5,4000); // inserting 4000 at position 5
    print(head);

    cout<<endl;
    insertNode(head,1,6000); // inserting 6000 at position 1
    print(head);
    
    cout<<endl;
    insertNode(head,9,3000); // inserting 3000 at position at 3000
    print(head);

    cout<<endl;
    deleteNodeByPosition(3,head); // deleting the node at position 3
    print(head);

    cout<<endl;
    deleteNodeByValue(3000,head); // deleting the node containing value 3000
    print(head);

    return 0;
}