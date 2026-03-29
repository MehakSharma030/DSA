#include<iostream> 
using namespace std;

int arrSum(int arr[] , int size){
   
    if(size == 0 ){
        return 0;
    }

    return arr[0] + arrSum(arr+1,size-1);

}

int main(){

    int arr[]={6,20,4,60,25,8,14};
    int size=7;

    int sum=arrSum(arr,size);
    cout<<endl<<"The sum of array is -> "<<sum<<endl;

    return 0;
}