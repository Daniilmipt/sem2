#include <iostream>
#include <cmath>

int main() {
    int n;
    int n0 =0;
    std::cin >> n;
    while (n != 0)
    {
        if (n % 2 == 0) {
            if (n >= n0) {
                n0 = n;
            }
        }
        std::cin >> n;
    }
    std::cout << n0;

}
