#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v={100,30,50,24};
    cout<<"vector initially :";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //pushing values to a vector using push_funciton
    v.push_back(10);
    cout<<"After pushing new element to the vector :";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    // knowing the size
    cout<<"Size of vector is :"<<v.size()<<endl;
    //knowing the capacity
    cout<<"Capacity of vector is :"<<v.capacity()<<endl;

    //inserting element at a particular value using insert function
    v.insert(v.begin()+3,500);
    //vector(after inserting)
    cout<<"After inserting new element :";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //deleting last element from the vector
    v.pop_back();
    cout<<"After popping an element from the vector : ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //deleting an element using erase function
    v.erase(v.begin(),v.begin()+1);
    cout<<"Vector after erasing the 0th element : ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //printing the first element of the vector
    cout<<"First element is :"<<v.front()<<endl;

    //printing the last element of the vector
    cout<<"Last element is :"<<v.back()<<endl;

    //sorting the vector
    cout<<"sorted vector is : ";
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i <<" ";
    }
    cout<<endl;

    //copying an array to another
    vector<int> b(v);
    cout<<"Printing the second created vector :";
    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}