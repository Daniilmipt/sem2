#include <iostream>
#include <cmath>

int fibs[100000] = {0};

int fib(int i) {
    if (n <=1) 
        return n;
    if (fibs[i] == 0) 
        fibs[n] = fib(n-1) + fib(n-2);
    return fibs[n];   
};


int main() {
    int n;
    std::cout << fibs[n];
    return 0;
}