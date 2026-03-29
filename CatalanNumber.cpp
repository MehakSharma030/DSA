#include<iostream>
#include<vector>
using namespace std;

void findCatalan(int n) {

        vector<int> res(n + 1);

        res[0] = 1;
        res[1] = 1;

        for (int i = 2; i <= n; i++) {
            res[i] = 0;
            for (int j = 0; j < i; j++) {
                res[i] += res[j] * res[i - j - 1];
            }
        }

        cout<<"Catalan numbers upto "<<n<<" are : ";
        for(int i=0;i<n;i++){
            cout<<res[i]<<" ";
        }
}

int main(){
    int n;
    cout<<"Enter the number of terms you want to print catalan number upto : ";
    cin>>n;
    findCatalan(n);

    return 0;
}