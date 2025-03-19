#include <iostream>

void fib(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        std::cout << a << std::endl;
        int temp = a;
        a = b;
        b = temp + b;
    }
}

int main() {
    fib(10);
    return 0;
}