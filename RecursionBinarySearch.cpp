#include<iostream>
using namespace std;

bool binarySearch( int arr[] , int s , int e , int key ) {

    if( s > e) {
        return false;
    }

    int mid=s+(e-s)/2;

    if(arr[mid] == key) {
        return true;
    }

    else if(arr[mid] < key) {
        binarySearch(arr , mid+1 , e , key);
    }

    else{
        binarySearch(arr , s , mid-1 , key);
    }

}

int main(){

    int arr[10] ={ 9 , 17 , 21 , 39 , 48 , 59 , 64 , 73 , 87 , 96 };
    int key = 17;
    int s=0;
    int e=9;

    bool found = binarySearch( arr , s , e , key );

    if( found ){
        cout<<endl<<"The element "<<key<<" is present in the array "<<endl;
    }

    else{
        cout<<endl<<"The element "<<key<<" is not present in the array "<<endl;
    }

    return 0;
}