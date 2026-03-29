#include<iostream>
using namespace std;
bool LinearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}
int main(){
    int array[9]={1,4,5,100,200,-50,-4,30,190};
    int search;
    cout<<"Enter element to search in the array  :";
    cin>>search;
    bool found=LinearSearch(array,9,search);
    if(found){
        cout<<"The element "<<search<<" is present in the array"<<endl;
    }
    else{
        cout<<"The element "<<search<<" is not present in the array"<<endl;
    }
    return 0;
}