#include <iostream>
#include <cmath>


int cicle(int n){
    int p;
    int a1 = 0;
    int a2 = 1;
    for (int i = 1; i <= ((n + 1) / 2)-1; i++){
        p = a1 + a2;
        a2 = a2 + p;
        a1 = p;
    }
    if (n % 2 == 0) return a2;
    else return a1;
} 

int main() {
    int n;
    std::cin >> n;
    std::cout << cicle(n);
    return 0;
}