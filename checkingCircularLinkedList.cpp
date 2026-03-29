#include<iostream>
#include<map>
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

bool chckcircular(Node* tail){
    if(tail == NULL){
        return true;
    }
    Node* temp=tail->next;
    while(temp != NULL && temp != tail){
        temp=temp->next;
    }
    if(temp == tail){
        return true;
    }
    else{
        return false;9
    }
}

bool isCircular(Node * tail){
    map<Node*,bool> visited;
    Node* temp=tail->next;
    while(temp!= tail && temp != NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }   
    return false;
}

int main(){

    Node* tail=NULL;

    insert(tail,1000,10);
    insert(tail,10,20);
    insert(tail,20,30);
    insert(tail,30,40);
    insert(tail,40,50);
    insert(tail,50,60);
    // printing the list
    print(tail);

    // chcking if its circualr or not
    bool ans=chckcircular(tail);
    if(ans == true){
        cout<<"the list is circular"<<endl;
    }
    else{
        cout<<"The list is not circular"<<endl;;
    }

    bool ANS=isCircular(tail);
    if(ans == true){
        cout<<"the list is circular"<<endl;
    }
    else{
        cout<<"The list is not circualar"<<endl;
    }

    return 0;
}