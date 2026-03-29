#include<iostream>
#include<queue> 
using namespace std;
int main(){
    priority_queue<int> maxi; // by default max priority queue
    priority_queue<int,vector<int>,greater<int>> mini; // forced to be min priority queue
    maxi.push(10);
    maxi.push(30);
    maxi.push(25);
    int size1=maxi.size();
    cout<<"size of max-priority queue is : "<<size1<<endl;

    mini.push(10);
    mini.push(30);
    mini.push(25);
    int size2=mini.size();
    cout<<"size of min-priority queue is : "<<size2<<endl;

    cout<<"Accessing max priority queue elements : ";
    for(int i=0;i<size1;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    cout<<"Accessing min priority queue elements : ";
    for(int i=0;i<size2;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    return 0;
}