
#include<iostream>
#include<vector>
using namespace std;
  
    int count_merge(vector<int> &arr , int s , int e){

        int res = 0;
        int mid = s + (e - s) / 2;
        int len1 = mid - s + 1;
        int len2 = e - mid;
    
        int *first = new int[len1];
        int *second = new int[len2];
    
        int mainArrIndex = s;
        for(int i = 0; i < len1; i++)
            first[i] = arr[mainArrIndex++];
    
        mainArrIndex = mid + 1;
        for(int i = 0; i < len2; i++)
            second[i] = arr[mainArrIndex++];
    
        int i = 0, j = 0;
        mainArrIndex = s;
    
        while(i < len1 && j < len2){
            if(first[i] <= second[j]) {
                arr[mainArrIndex++] = first[i++];
            }
            else {
                arr[mainArrIndex++] = second[j++];
                res += (len1 - i);
            }
        }
    
        while(i < len1)
            arr[mainArrIndex++] = first[i++];
    
        while(j < len2)
            arr[mainArrIndex++] = second[j++];
    
        // deleting the dynamic memory created
        delete [] first;
        delete [] second;
    
        return res;

    }

   
    int countInversion(vector<int> &arr , int s , int e){
        
        int mid=s+(e-s)/2;
        int res=0;
        
        if(s < e){
            // dividing the array for left side
            res+=countInversion(arr , s , mid);
            
            // dividing the array for  right side
            res+=countInversion(arr , mid+1 , e);
           
            // merging two sorted arrays nd counting the inversion count
            res+=count_merge(arr , s , e);
        }
        
        return res;
    }
    
    
    int main() {
        
        vector<int> arr= {9, 4, 1, 3, 5};
        int n=arr.size();

        int ans=countInversion(arr , 0 , n-1);

        cout<<endl<<" Count Inversion -> "<< ans <<endl;

        return 0;
        
    }
