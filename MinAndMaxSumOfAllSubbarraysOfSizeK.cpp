#include<iostream>
#include<deque>
using namespace std;

int SumOfKsubArray(int *arr , int n , int k){

    deque<int> maxm;
    deque<int> minm;
    int ans = 0;

    // first window
    for(int i = 0; i < k; i++){
        while(!maxm.empty() && arr[maxm.back()] <= arr[i]){
            maxm.pop_back();
        }

        while(!minm.empty() && arr[minm.back()] >= arr[i]){
            minm.pop_back();
        }

        maxm.push_back(i);
        minm.push_back(i);
    }

    ans += arr[maxm.front()] + arr[minm.front()];

    // remaining windows
    for(int i = k; i < n; i++){

        // remove out-of-window elements
        if(!maxm.empty() && i - maxm.front() >= k){
            maxm.pop_front();
        }

        if(!minm.empty() && i - minm.front() >= k){
            minm.pop_front();
        }

        // add new element
        while(!maxm.empty() && arr[maxm.back()] <= arr[i]){
            maxm.pop_back();
        }

        while(!minm.empty() && arr[minm.back()] >= arr[i]){
            minm.pop_back();
        }

        maxm.push_back(i);
        minm.push_back(i);

        ans += arr[maxm.front()] + arr[minm.front()];
    }

    return ans;
}

int main()
{
    int arr[] = { 2, 5, -1, 7, -3, -1, -2 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    int res = SumOfKsubArray(arr, N, k);
    cout << "sum : " << res << endl;

    return 0;
}