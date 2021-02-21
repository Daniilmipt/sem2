#include <iostream>
#include <cmath>

int main() {
    int n;
    int k = 1;
    std::cin >> n;
    while (n > k)
    {
        k = k * 2;

    }
if (k == n) {
     std::cout << "YES";
} else  std::cout << "NO";
}
