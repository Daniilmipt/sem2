#include <iostream>
#include <cmath>

int main() {
    int a,b;
    std::cin >> a >> b;
    while (a != b)
    {
        if (a > b) {
            a = abs(a-b);
        }
        else b = abs(a-b);
    }
    std::cout << a;
}
