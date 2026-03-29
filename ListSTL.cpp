#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> lst={1,2,3,4,5};
    cout<<"Initially the list is :";
    for(int i:lst){
        cout<<i<<" ";
    }
    cout<<endl;

    //pushing element at front
    lst.push_front(10);
    //pushing element at back
    lst.push_back(20);

    cout<<"After pushing elements list is :";
    for(int i:lst){
        cout<<i<<" ";
    }
    cout<<endl;

    //popping element at front
    lst.pop_front();
    //popping element at back
    lst.pop_back();

    cout<<"After popping elements list is :";
    for(int i:lst){
        cout<<i<<" ";
    }
    cout<<endl;

    //inserting new element
    lst.insert(next(lst.begin(), 3), 100);
    cout<<"After inserting new element list is :";
    for(int i:lst){
        cout<<i<<" ";
    }
    cout<<endl;

    //erasing element/elements
    lst.erase(lst.begin());
    cout<<"After erasing element list is :";
    for(int i:lst){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<endl;
    list<int> lst1={1,2,3};
    list<int> lst2={4,5,6};

    //printing the two lists 
    cout<<"List 1 is : ";
    for(int i:lst1){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"List 2 is : ";
    for(int i:lst2){
        cout<<i<<" ";
    }
    cout<<endl;

    lst1.merge(lst2);
    cout<<"Merged list are :";
    for(int i:lst1){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<endl;
    // to check for consecutive unique elemets in the list
    list<int> lst3 = {1,1,2,2,2,4,5,5,6};

    cout << "the list is :";
    for(int i : lst3) 
        cout << i << " ";
    cout << endl;

    lst3.unique();

    cout << "printing only unique elements :";
    for(int i : lst3) 
        cout << i << " ";


    return 0;
}