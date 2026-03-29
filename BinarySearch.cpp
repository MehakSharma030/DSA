#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
    int low=0;
    int high=size-1;
    int mid=low+((high-low)/2);

    while(low <= high){

        if(arr[mid] == key){
            cout<<"The element is present in the array at : ";
            return key;
        }

        else if(arr[mid] < key){
            low=mid+1;
        }

        else{
            //arr[mid] > key
            high=mid-1;
        }
        mid=low+((high-low)/2);

    }
    cout<<"The element is not present in the array"<<endl;
    return -1;
    
}

int main(){
    int arr[17]={8, 9, 10, 20, 30, 32, 35, 40, 41, 50, 65, 65, 74, 79, 81, 85, 92};
    int n;
    cout<<"Enter key to search : ";
    cin>>n;
    int bin_search=BinarySearch(arr,17,n);
    cout<<bin_search;
    return 0;
}