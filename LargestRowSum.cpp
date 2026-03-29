#include<iostream>
using namespace std;

void Row_sum(int arr[][3],int rows,int coloumns){
    int max_Sum=0;
    int row_num=-1;
    for(int row=0;row<3;row++){
        int row_sum=0;
        for(int col=0;col<3;col++){
            row_sum=row_sum+arr[row][col];
        }
        if(row_sum > max_Sum){
            max_Sum=row_sum;
            row_num=row+1;
        }
    }
    cout<<"maximum row sum is : "<<max_Sum<<endl;
    cout<<"row number is : "<<row_num<<endl;
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

   Row_sum(arr,3,3);

    return 0; 
}