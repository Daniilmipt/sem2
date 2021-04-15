#include <iostream>
#include <cmath>

int main() {
    int n;
    int k = 0;
    std::cin >> n;
    while (n != 0)
    {
        if (n % 2 == 0) {
            k = k + 1;
        }
        std::cin >> n;
    }
    std::cout << k;

}
