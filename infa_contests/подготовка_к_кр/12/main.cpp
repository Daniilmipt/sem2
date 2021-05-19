#include <iostream>
#include <cmath>
#include <iomanip>


int main()
{
    float s,v,a,t_1,t_2;
    std::cin >> a >> v >> s;
    t_1 = sqrt(2*s/a);
    t_2 = s/v;
    if (t_1>t_2) std::cout << 2;
    else std::cout << 1;

}
