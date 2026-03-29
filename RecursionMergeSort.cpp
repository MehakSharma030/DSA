#include<iostream>
using namespace std;
 
//                                       # MERGE FUNCTION 1
// void merge_sorted_Arr(int *arr , int s ,int e){

//     int mid=s+(e-s)/2;
//     int len1=mid-s+1;
//     int len2=e-mid;

//     // creating two temporary arrays
//     int *first=new int[len1];
//     int *second=new int[len2];

//     // Copy values
//     int mainArrIndex = s;
//     for(int i = 0; i < len1; i++)
//         first[i] = arr[mainArrIndex++];

//     mainArrIndex = mid + 1;
//     for(int i = 0; i < len2; i++)
//         second[i] = arr[mainArrIndex++];

//     // Merge two sorted arrays
//     int i = 0, j = 0;
//     mainArrIndex = s;   

//     while(i < len1 && j < len2){
//         if(first[i] < second[j])
//             arr[mainArrIndex++] = first[i++];
//         else
//             arr[mainArrIndex++] = second[j++];
//     }

//     // adding remaining element of first[]
//     while(i < len1)
//         arr[mainArrIndex++] = first[i++];
 
//     // adding remaining element of second[]
//     while(j < len2)  
//         arr[mainArrIndex++] = second[j++];

//     // deleting memory created by pointers
//     delete [] first;   
//     delete [] second;
// }


//                                       # MERGE FUNCTION 2
// creating merge fucntion using indexes
void merge_sorted_Arr(int *arr , int s , int e){

    int mid=s+(e-s)/2;

    int i=0;
    int j=mid+1;

    while(i <= mid && j <= e){

        // arr[i] is at its right place
        if(arr[i] <= arr[j]){
            i++;
        }

        // if j is smaller
        else {
            int temp=arr[j];
            int index=j;

            // shifitng elements to its right
            while( index > i){
                arr[index]=arr[index-1];
                index--;
            }
            arr[i]=temp;
            j++;
            i++;


        }
    }

}

void merge_Sort(int *arr , int s , int e){

    // base case
    if( s >= e ){
        return ;
    }

    int mid=s+(e-s)/2;

    // left part sorting
    merge_Sort(arr , s , mid);

    //right part sorting
    merge_Sort(arr , mid+1 , e);

    //merging sorted arrays
    merge_sorted_Arr(arr , s , e);

}

int main(){

    int arr[7]={50,20,79,80,26,17,2};
    int n=7;

    cout<<endl<<"Original array -> ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    merge_Sort(arr , 0 , n-1);

    cout<<endl<<"Sorted array -> ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}