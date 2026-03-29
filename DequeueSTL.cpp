#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq={1,2,3,4,5,6,7,8,9};
    cout<<"Initially the deque is :";
    for(int i:dq){
        cout<<i<<" ";
    }
    cout<<endl;

    //pushing an element at front
    cout<<"after adding an element at front :";
    dq.push_front(10);
    for(int i:dq){
        cout<<i<<" ";
    }
    cout<<endl;

    //pushing an element at last
    cout<<"after adding an element at back :";
    dq.push_back(20);
    for(int i:dq){
        cout<<i<<" ";
    }
    cout<<endl;

    // adding an element using insert
    cout<<"Inserting another element : ";
    dq.insert(dq.begin()+2,100);
    for(int i:dq){
        cout<<i<<" ";
    }
    cout<<endl;

    //deleting an elemnt at front
    cout<<"After deleting front element : ";
    dq.pop_front();
    for(int i:dq){
        cout<<i<<" ";
    }
    cout<<endl;

    //getting value stored at a particular index
    cout<<"Getting element from a particular index : "<<dq.at(2)<<endl;
    
    //deleting an elemnt at back
    cout<<"After deleting back element : ";
    dq.pop_back();
    for(int i:dq){
        cout<<i<<" ";
    }
    cout<<endl;

    //deleting an elemnt using erase()
    cout<<"After deleting element using erase funciton :";
    dq.erase(dq.begin(),dq.begin()+2);
    for(int i:dq){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size of deque : "<<dq.size()<<endl;
    cout<<"MAximum size of deque : "<<dq.max_size()<<endl;

    return 0;
}