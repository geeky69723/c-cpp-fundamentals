#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int a, b;
    cout << "Enter n and r: ";
    cin >> a >> b;
    cout << "nCr = " << combination(a, b) << endl;
    cout << "nCr = " << permutation(a, b) << endl;
    return 0;
}
