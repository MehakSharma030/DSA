
#include<iostream>
using namespace std;

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

class queue {
private:
    Node* qfront;
    Node* rear;
    int size;

public:
    queue() {
        qfront = NULL;
        rear = NULL;
        size = 0;
    }

    // enqueue (insert at rear)
    void enqueue(int elem) {
        Node* temp = new Node(elem);

        if(rear == NULL) {   // first element
            qfront = temp;
            rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }

        size++;
    }

    // dequeue (remove from front)
    int dequeue() {
        if(qfront == NULL) {
            return -1;   // no printing
        }

        Node* temp = qfront;
        int ans = temp->data;

        qfront = qfront->next;

        if(qfront == NULL) { // queue becomes empty
            rear = NULL;
        }

        delete temp;
        size--;

        return ans;
    }

    void front() {
        if(qfront == NULL) {
            cout << "Queue empty\n";
        } else {
            cout << "front element -> " << qfront->data << endl;
        }
    }

    void rear_element() {
        if(rear == NULL) {
            cout << "Queue empty\n";
        } else {
            cout << "rear element -> " << rear->data << endl;
        }
    }

    void get_size() {
        cout << "size of queue -> " << size << endl;
    }

    bool isEmpty() {
        return (qfront == NULL);
    }
};

int main(){
    queue q;

    // adding elements 
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.front();
    q.rear_element();
    q.get_size();

    int ans=q.dequeue();
    cout<<"Dequeued Element : "<<ans<<endl;

    int ans1=q.dequeue();
    cout<<"Dequeued Element : "<<ans1<<endl;

    q.front();
    q.rear_element();
    q.get_size();

    if(q.isEmpty()){
        cout<<"queue is empty !!! "<<endl;
    }
    else{
        cout<<"queue is not empty !!!"<<endl;
    }
    return 0;
}