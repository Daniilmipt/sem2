#include <iostream>

int main()
{
    int n,x,a;
    int k = 1;
    std::cin >> n;
    std::cin >> x;
    a = x;
    int max = x;
    for (int i = 1; i < n; ++i){
            std::cin >> x;
            if  (x > max) {
                max = x;
                k = 0;
            } else if (x == max) k++;
    } if (k==0) k = 1;
    std::cout << k;
}
