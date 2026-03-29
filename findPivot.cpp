#include<iostream> 
using namespace std;
int getPivot(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start < end){

        if(arr[mid] >= arr[0]){
            start=mid+1;
        }

        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    // we can also return end , both will give the same answer
    return start;
}

int main(){
    int arr[5]={7,8,1,3,4};
    int pivot=getPivot(arr,5);
    cout<<"The pivot element in the array is at index : "<<pivot<<endl;
    return 0;
}