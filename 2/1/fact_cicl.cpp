#include <iostream>
int fact(int x) {
    int f = 1;
    for (int i = 1; i <= x; ++i)
        f *= i;
    return f;
    std::cout << f;
}