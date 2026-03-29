#include<iostream>
#include<array>
#include <algorithm>
using namespace std;
int main(){

    // creating an STL array of size 4
    array <int,4> val={20,10,50,5};


    // printing the whole array
    cout<<"Printing the Array : ";
    for(int i:val){
        cout<<i<<" ";
    }
    cout<<endl;
    // to check whether the array is empty or not
    cout<<"Array Empty : "<<val.empty()<<endl;

    //print first element
    cout<<"The first element is : "<<val.front()<<endl;

    //print last element 
    cout<<"The last element is : "<<val.back()<<endl;

    // swapping any two elements
    swap(val[0],val[1]);
    // printing the whole array
    cout<<"Array after Swapping :";
    for(int i:val){
        cout<<i<<" ";
    }
    cout<<endl;

    //sorting the array
    sort(val.begin(),val.end());
    // printing the whole array
    cout<<"Sorted Array :";
    for(int i:val){
        cout<<i<<" ";
    }
    cout<<endl;

    //finding the element in the array
    cout<<"Finding an element is present or not : ";
    if(find(val.begin(), val.end(), 5) != val.end()) {
        cout << "Yes it is present in the array" << endl;
    } 
    else {
        cout << "No it is NOT present in the array" << endl;
    }

    //filling the array with a single value
    array<int,3> arr;
    fill(arr.begin(),arr.end(),5);
    //printing the initialized array 
    cout<<"Initializing array with the same value : ";
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}