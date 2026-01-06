#include<iostream>
using namespace std;

long long fibonacci(int x) {
    if (x == 0) return 0;
    if (x == 1) return 1;
    long long a = 0, b = 1, c;
    for (int i = 2; i <= x; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int x = 50;
    cout << "Fibonacci(50) = " << fibonacci(x) << endl;
    return 0;
}
