#include <iostream>
#include <cmath>

int main()
{
    int x;
    int k = 0;
    int a = 0;
    int b = 0;
    std::cin >> x;
    while (x != 0){
        a = a + x;
        b = b + pow(x,2);
        ++k;
        std::cin >> x;
    }
    std::cout << floor(a/k + 0.5)/1000 <<' '<< floor(1000*(b/k - pow(a/k,2)))/1000;
    return 0;
}
