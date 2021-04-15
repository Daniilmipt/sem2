#include <iostream>
#include <cmath>

int fib(int i) {
    if (i <= 1) return 0;
    if (i <= 2) return 1;
    else return fib(i-1)+fib(i-2);    
};


int main() {
    int f;
    int n;
    std:: cin >> n;
    f=fib(n);
    std:: cout << f;
    return 0;
}