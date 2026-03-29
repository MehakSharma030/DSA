#include<iostream>
using namespace std;

int  firstOcc(int arr[],int size,int key){
    int start=0;
    int end=size;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start <= end){

        if(arr[mid] == key){
            ans=mid;
            end=mid-1;
        }

        else if(arr[mid] < key){
            start=mid+1;
        }

        else{
            //arr[mid] > key
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
    if(ans != -1){
        return ans;
    }
    return -1;
}
 
int lastOcc(int arr[],int size,int key){
    int start=0;
    int end=size;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start <= end){

        if(arr[mid] == key){
            ans=mid;
            start=mid+1;
        }

        else if(arr[mid] < key){
            start=mid+1;
        }

        else{
            //arr[mid] > key
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
    if(ans != -1){
        return ans;
    }
    return -1;
} 

int main(){
    int arr[10]={1,2,2,2,3,4,5,5,6,9};
    int res1=firstOcc(arr,11,2);
    cout<<"first occurence of 2 is at index : "<<res1<<endl;
    int res2=lastOcc(arr,11,2);
    cout<<"last occurence of 2 is at index : "<<res2<<endl;
    return 0;
}    