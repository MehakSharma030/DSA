#include<iostream>
using namespace std;
bool ispresent(int arr[][3],int target,int rows,int coloumns){

    for(int i=0;i<rows;i++){
        for(int j=0;j<coloumns;j++){

            if(arr[i][j] == target){
                cout<<"the element "<<target<<" is present in the array !";
                return true;
            }
            
        }
    }
    cout<<"the element "<<target<<" is not present in the array !!!!";
    return false;

}

int main(){
    int arr[3][3];
    // getting array elements 
    cout<<"Enter array elements : ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    // printing array
    cout<<"The array is :"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"enter the element which you want to find  :";
    cin>>target;
    ispresent(arr,target,3,3);
    return 0; 
}