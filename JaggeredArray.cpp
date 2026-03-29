#include<iostream>
using namespace std;

int main(){

    //getting input of number of rows
    int rows;
    cout<<"enter the number of rows : ";
    cin>>rows;

    int *colms=new int [rows];
    for(int i=0;i<rows;i++){
        cout<<"Enter the number of coloumns in row "<<i+1<<" : ";
        cin>>colms[i];
    }

    //creating a 2-D array in heap
    int **arr=new int *[rows];

    //getting the number of diff coloumn in diff rows
    for(int i=0;i<rows;i++){
        arr[i]=new int [colms[i]];
    }

    //getting input of elements
    cout<<"enter the elements : ";
    for(int i=0;i<rows;i++){
        for(int j=0;j<colms[i];j++){
            cin>>arr[i][j];
        }
    }

    cout<<"The array is : "<<endl;
    //printing the array elements
    for(int i=0;i<rows;i++){
        for(int j=0;j<colms[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    for(int i = 0; i < rows; i++){
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}