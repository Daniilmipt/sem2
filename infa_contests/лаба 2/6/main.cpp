#include <iostream>
#include <cmath>

int main() {
    int n;
    int k = 1;
    int n0 = 0;
    std::cin >> n;
    while (n != 0)
    {
            if ( n == n0){
                k++;
            }
            if (n > n0) {
                n0 = n;
                k = 1;
            }

        std::cin >> n;
    }
    std::cout << k;

}
