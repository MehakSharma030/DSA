#include<iostream>
using namespace std;

int sumNum(int n){
    if(n == 0 ){
        return 0;
    }

    return n+sumNum(n-1);
}

int main(){

    int n;
    cout<<endl<<"Enter the number upto which you want tReveo find the sum : ";
    cin>>n;

    cout<<"Sum from 1 to "<<n<<" is -> ";
    int ans=sumNum(n);
    cout<<ans<<endl;

    return 0;
}
