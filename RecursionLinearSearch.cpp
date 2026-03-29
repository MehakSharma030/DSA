#include<iostream>
using namespace std;

bool linearSearch(int arr[] , int size , int key){

    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }

    else{
        linearSearch(arr+1 , size-1 , key);
    }

}

int main(){

    int array[]={12 , 30 , 68 , 71 , 45 , 34 , 90};
    int key=34;

    bool ans=linearSearch(array , 7 , key);

    if(ans){
        cout << endl << key << " is present in the array " << endl;
    }
    else{
        cout << endl << key << " is not present in the array " << endl;
    }

    return 0;
}