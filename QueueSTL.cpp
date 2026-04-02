#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    cout<<"Front element : "<<q.front()<<endl;
    cout<<"Rear element : "<<q.back()<<endl;

    q.push(20);
    cout<<"Front element : "<<q.front()<<endl;
    cout<<"Rear element : "<<q.back()<<endl;

    q.push(30);
    cout<<"Front element : "<<q.front()<<endl;
    cout<<"Rear element : "<<q.back()<<endl;
    cout<<"size of queue is : "<<q.size()<<endl;    

    q.pop();
    q.pop();
    cout<<"Front element:"<<q.front()<<endl;
    cout<<"Rear element : "<<q.back()<<endl;

    cout<<"size of queue : "<<q.size()<<endl;
    
    if(q.empty()){
        cout<<endl<<"Empty Queue "<<endl;
    }
    else{
        cout<<endl<<"Non-Empty Queue "<<endl;
    }

    return 0;
}