#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    //adding elements 
    s.insert(10);
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);
    s.insert(40);
    s.insert(50);
    s.insert(40);

    int size=s.size();
    cout<<"Set elements are : ";
    for(auto it=s.begin();it!=s.end();it++){ // or write this way [ for(auto it:s){} ]
        cout<<*it<<" ";
    }
    cout<<endl;

    //deleting elements
    cout<<"After deleting elements : ";
    set<int> :: iterator it=s.begin();
    ++it;
    s.erase(it);
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //to chck whether a particular element is opresent or not
    cout<<"40 is present or not : "<<s.count(40)<<endl;

    cout<<"Traversing the set form index 1 : ";
    //to traverse the set from a particular value
    set<int> :: iterator itr=s.find(30);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    

    return 0;
}