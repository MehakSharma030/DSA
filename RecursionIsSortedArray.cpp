#include<iostream>
using namespace std;

bool isSorted(int arr[] , int size){
    
    if( size == 0 || size == 1 ) {
        return true;
    }

    if( arr[0] > arr[1] ) {
        return false;
    }

    else{
        bool ans=isSorted(arr+1 , size-1);
        return ans;
    }

}

int main(){
    int arr[]={1,2,15,7,9,10};
    int size=6;

    bool ans = isSorted(arr,size);

    if(ans){
        cout<<endl<<"The array is sorted"<<endl;
    }

    else{
        cout<<endl<<"The array is not sorted"<<endl;
    }

    return 0;
}