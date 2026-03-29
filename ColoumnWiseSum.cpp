#include<iostream>
using namespace std;

void Col_sum(int arr[][3],int rows,int coloumns){

    for(int col=0;col<3;col++){
    int col_sum=0;
    for(int row=0;row<3;row++){
        col_sum=col_sum+arr[row][col];
    }
    cout<<"sum of Col "<<col+1<<" is : "<<col_sum<<endl;
   }
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

   Col_sum(arr,3,3);

    return 0; 
}