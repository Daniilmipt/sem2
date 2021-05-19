#include <iostream>
#include <cmath>
#include <iomanip>



int main()
{
    float g,t,s,vx,h;
    g = 9.81;
    std::cin >> h >> vx;
    t = sqrt(2*h/g);
    s = vx*t;

    std::cout << std::fixed << std::setprecision(4) << s;
}
