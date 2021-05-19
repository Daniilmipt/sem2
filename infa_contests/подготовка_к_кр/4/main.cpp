#include <iostream>
#include <cmath>
#include <iomanip>


int main()
{
    int n;
    float r;
    float s = 0.0;
    std::cin >> n;
    for (int i = 0; i < n; ++i){
        std::cin >> r;
        s = s + r*r;
    }
    std::cout << std::fixed << std::setprecision(4) << sqrt(s);
}
