#include<iostream>
using namespace std;

int distinct_ways(int nStairs){

    if(nStairs < 0){
        return 0;
    }

    if(nStairs == 0){
        return 1;
    }

    int ans=distinct_ways(nStairs - 1)+ distinct_ways(nStairs - 2);
    return ans;

}

int main(){
    int n=5;

    int val=distinct_ways(n);
    cout<<"number of ways for reaching the stair "<<n<<" is -> "<<val<<endl;

    return 0;
}