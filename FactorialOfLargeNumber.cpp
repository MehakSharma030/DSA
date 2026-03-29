#include <iostream>
#include <vector>
using namespace std;

int multiply(int size, int Res[], int n) {
    int carry = 0;

    for (int i = 0; i < size; i++) {
        int product = Res[i] * n + carry;
        Res[i] = product % 10;
        carry = product / 10;
    }

    while (carry) {
        Res[size] = carry % 10;
        carry /= 10;
        size++;
    }

    return size;
}

vector<int> factorial(int n) {
    int Res[10000];
    Res[0] = 1;
    int size = 1;

    for (int i = 2; i <= n; i++) {
        size = multiply(size, Res, i);
    }

    vector<int> ans;
    for (int i = size - 1; i >= 0; i--) {
        ans.push_back(Res[i]);
    }

    return ans;
}

int main() {
    int num;
    cout << "Enter a number whose factorial you want to find: ";
    cin >> num;

    vector<int> fact = factorial(num);

    cout << "Factorial is: ";
    for (int d : fact) {
        cout << d;
    }
    cout << endl;

    return 0;
}
