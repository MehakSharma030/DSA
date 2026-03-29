#include<iostream> 
using namespace std;

int floorSqrt(int n)
{
    int start=1;
    int end=n/2;
    long long int mid=start+(end-start)/2;
    long long int ans;

    if(n==0 || n==1){
        return n;
    }
    while(start <= end){

        long long int square=mid*mid;

        if(square == n){
            return mid;
        }
        else if(square > n){
            end=mid-1;
        }

        else{
            // (mid*mid) < n
            ans=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;

    }
    return ans;
}

double afterDec(int num, int befDec, int decimals) {
    double factor = 1.0;
    double ans = befDec;

    for(int i = 0; i < decimals; i++) {
        factor = factor / 10;
        for(double j = ans; j * j <= num; j += factor) {
            ans = j;
        }
    }
    return ans;
}


int main(){
    int num;
    cout<<"Enter a number whose square root you want to find : ";
    cin>>num;
    int tempSol=floorSqrt(num);
    //let the precision of decimals upto 2
    double fullSol=afterDec(num,tempSol,3);
    cout<<"he square root of the "<<num<<" is : "<<fullSol<<endl;
    return 0;
}
