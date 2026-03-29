#include<iostream>
using namespace std;
#include <bits/stdc++.h> 

void reverse(vector<int>& arr){
	int i=0;
	int j=arr.size()-1;

	while( i<j ){
		int temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
		i++;
		j--;
	}
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	vector<int> ans;

	int i=n-1;
	int j=m-1;
	int carry=0;

	while(i >= 0 && j >= 0){
		int val1=a[i];
		int val2=b[j];
		int sum=val1+val2+carry;

		carry=sum / 10;
		sum=sum % 10;
		ans.push_back(sum);

		i--;
		j--;
	}

	// if size(a) > size (b)
	while( i >= 0){
		int sum=a[i]+carry;
		carry=sum / 10;
		sum=sum % 10;
		ans.push_back(sum);

		i--;
	}

	// if size(a) < size(b)
	while( j >= 0){
		int sum=b[j]+carry;
		carry=sum / 10;
		sum=sum % 10;
		ans.push_back(sum);

		j--;
	}
	
	//id carry is not zero
	if(carry != 0)
	{
		ans.push_back(carry);
	}

	reverse(ans);
	return ans;
}

int main(){
    vector<int> arr1={1,2,3,4,5};
    vector<int> arr2={6,7,8,9,10};
    vector<int> res;
    res=findArraySum(arr1,5,arr2,5);
    cout<<"Sum of two arrays in vector form is : ";
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}