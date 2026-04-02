#include<iostream>
#include<queue>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(40);

    cout<<"front element : "<<dq.front()<<endl;
    cout<<"Rear element : "<<dq.back()<<endl;

    dq.pop_front();
    dq.pop_back();
    
    cout<<"front element : "<<dq.front()<<endl;
    cout<<"Rear element : "<<dq.back()<<endl;

    return 0;
}