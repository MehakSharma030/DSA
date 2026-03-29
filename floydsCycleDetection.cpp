#include<iostream>
#include<map>
using namespace std;

class Node{
public:
    int val;
    Node* nextptr;

    Node(int val){
        this->val = val;
        this->nextptr = NULL;
    }
};

bool chckLoop(Node* &head){
    Node* temp=head;
    map<Node* , bool> visited;
    while(temp != NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp]=true;
        temp=temp->nextptr;
    }
    return false;
}

// insert at tail
void insertAtTail(Node* &head, int val){

    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->nextptr != NULL){
        temp = temp->nextptr;
    }

    temp->nextptr = newNode;
}

Node* floydsCycleDetection(Node* &head){
    Node* slow=head;
    Node* fast=head;
    while(slow != NULL && fast != NULL){
        slow=slow->nextptr;
        fast=fast->nextptr;
        if(fast != NULL){
            fast=fast->nextptr;
        }

        if(slow == fast){
            cout<<"cycle is present in the list "<<endl;
            return slow;
        }
    }
    cout<<"cycle is not present in the list"<<endl;
    return NULL;
}

Node* detect_starting_node(Node* head){
    Node* slow=head;
    Node* intersection=floydsCycleDetection(head);
    while(slow != intersection){
        slow=slow->nextptr;
        intersection=intersection->nextptr;
    }
    return slow;
}

void removeLoop(Node* &head){
    if(head == NULL){
        return;
    }
    Node* startingNode=detect_starting_node(head);
    Node* temp=startingNode;
    while(temp->nextptr != startingNode){
        temp=temp->nextptr;
    }
    temp->nextptr=NULL;
    cout<<"the loop is removed successfully"<<endl;
}

// print list (works only if no loop)
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->nextptr;
    }
    cout << endl;
}

int main(){

    Node* head = NULL;

    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);

    cout<<"Linked List before loop:";
    print(head);

    // creating a loop
    Node* temp = head;
    Node* loopNode = head;

    // move loopNode to position 3
    int count = 1;
    while(count < 3){
        loopNode = loopNode->nextptr;
        count++;
    }

    // go to last node
    while(temp->nextptr != NULL){
        temp = temp->nextptr;
    }

    // create loop
    temp->nextptr = loopNode;

    // checking if loop in the linked listif(ans1)
    // APPROACH 1.
    bool ans1=chckLoop(head);
    if(ans1){
        cout<<"loop is present in the list"<<endl;
    }
    else{
        cout<<"loop is not present in the lsit"<<endl;
    }

    // APPROACH 2.
    Node* ans=floydsCycleDetection(head);
    cout<<"loop is present at node "<<ans->val<<endl;

    // detecting the loop node
    Node* ans3=detect_starting_node(head);
    cout<<"the starting node is "<<ans3->val<<endl;
    
    // removing loop
    removeLoop(head);

    // chcking again if the loop is actually removed or not
    Node* ANS=floydsCycleDetection(head);
    cout<<"cycle is present at node "<<ANS->val<<endl;

    return 0;
}