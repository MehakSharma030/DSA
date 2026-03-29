#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void segmented_sieve(int L, int R) {

        int N = sqrt(R);

        // Step 1: Sieve till sqrt(R)
        vector<bool> isPrime(N + 1, true);
        isPrime[0] = isPrime[1] = false;

        for(int i = 2; i * i <= N; i++){
            if(isPrime[i]){
                for(int j = i * i; j <= N; j += i){
                    isPrime[j] = false;
                }
            }
        }

        vector<int> primes;
        for(int i = 2; i <= N; i++){
            if(isPrime[i]){
                primes.push_back(i);
            }
        }

        // Step 2: Segmented sieve [L, R]
        vector<bool> isPrimeRange(R - L + 1, true);

        if(L == 1) 
            isPrimeRange[0] = false;

        for(int pr : primes){
            int start = max(pr * pr, ((L + pr - 1) / pr) * pr);

            for(int j = start; j <= R; j += pr){
                isPrimeRange[j - L] = false;
            }
        }

        // Step 3: Print primes in range
        for(int i = 0; i <= R - L; i++){
            if(isPrimeRange[i]){
                cout << (i + L) << " ";
            }
        }
}
int main(){
    segmented_sieve(110,130);
    return 0;
}