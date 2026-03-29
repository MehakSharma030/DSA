#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"size of queue is : "<<q.size()<<endl;
    cout<<"After pushing elements "<<endl;
    cout<<"Top element : "<<q.front()<<endl;
    cout<<"Last element : "<<q.back()<<endl;

    q.pop();
    cout<<"After deleting element top is :"<<q.front()<<endl;
    cout<<"is the queue empty : "<<q.empty()<<endl;


    return 0;
}