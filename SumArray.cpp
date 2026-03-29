#include<iostream>
using namespace std;
int main(){
    
    int arr[100];

    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<endl;

    cout<<"Enter array elements : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum=0;
    cout<<endl;

    cout<<"Array is :"<<endl;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Sum of elements of array is : "<<sum<<endl;

    return 0;
}