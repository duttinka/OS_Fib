

#include "CMake_fib.h"
#include <iostream>

using namespace std;

void printFibonacci(int n) {
        if (n <= 0) return;

        int a = 0, b = 1;
        cout << a;
        for (int i = 1; i < n; ++i) {
          cout << " " << b;
          int temp = b;
          b = a + b;
          a = temp;
        }
        cout << endl;
}

int main() {
        int n;
        cout << "N= ";
        cin >> n;
        printFibonacci(n);
        return 0;
}
