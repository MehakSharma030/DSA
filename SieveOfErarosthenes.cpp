#include <iostream>
#include <vector>
using namespace std;

void sieve(int n){

    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    // Sieve of Eratosthenes
    for(int i = 2; i * i <= n; i++){
        if(prime[i]){
            for(int j = i * i; j <= n; j += i){
                prime[j] = false;
            }
        }
    }

    int count = 0;
    cout << "Prime numbers upto " << n << " are : ";
    for(int i = 2; i <= n; i++){
        if(prime[i]){
            cout << i << " ";
            count++;
        }
    }

    cout << "\nTotal prime numbers upto " << n << " are : " << count << endl;
}

int main(){
    int num;
    cout << "Enter the number upto which you want to print prime numbers: ";
    cin >> num;
    sieve(num);
    return 0;
}
