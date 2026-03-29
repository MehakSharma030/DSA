#include<iostream>
using namespace std;

void binary_search(int arr[][4], int rows, int colms, int target){

    int start = 0;
    int end = rows * colms - 1;

    while(start <= end){

        int mid = start + (end - start) / 2;

        int elem = arr[mid / colms][mid % colms];

        if(elem == target){
            cout << "Element " << target << " is present in the matrix" << endl;
            return;
        }

        else if(target < elem){
            end = mid - 1;
        }

        else{
            start = mid + 1;
        }
    }

    cout << "Element " << target << " is not present in the matrix" << endl;
}

int main(){

    int arr[3][4] = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };

    int target = 34;

    binary_search(arr,3,4,target);

    return 0;
}