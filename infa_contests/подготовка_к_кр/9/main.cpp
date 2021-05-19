#include <iostream>
#include <cmath>
#include <iomanip>



int main()
{
    int n;
    int k = 0;
    float max = 0;
    float x,y,z,m;
    std::cin >> n;
    for (int i = 0; i < n; ++i){
        std::cin >> x >> y >> z;
        m = 3.14*x*x*y*z;
        if (m > max) {
                max = m;
        k = i;
        }
    }
    std::cout << k;
}
