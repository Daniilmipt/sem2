#include <iostream>
#include <iomanip>

int main()
{
    int n;
    float x;
    int s = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i){
        std::cin >> x;
        s = s + x;
    }
    std::cout << std::fixed << std::setprecision(10) << s/x;
}
