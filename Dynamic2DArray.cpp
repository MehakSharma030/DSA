#include<iostream>
using namespace std;

int main(){

    int rows;
    int colms;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of coloumns : ";
    cin>>colms;

    int **arr=new int *[rows];
    for(int i=0;i<rows;i++){
        arr[i]=new int [colms];
    }

    cout<<"Enter array elements : "<<endl;
    //taking input of 2-D array elements
    for(int i=0;i<rows;i++){
        for(int j=0;j<colms;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"the array is : "<<endl;
    //printing the input array
    for(int i=0;i<rows;i++){
        for(int j=0;j<colms;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //deleting value assignes dynamically
    for(int i=0;i<rows;i++){
        //deleting colms
        delete []arr[i];
    }
    // deleting rows
    delete []arr;
    
    return 0;
}