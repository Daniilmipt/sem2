#include <iostream>

int main()
{
    int n,m;
    std::cin >> m >> n;
    for (int i = 0; i < n; ++i){
        std::cout << '|';
    }

    for (int i = 0; i < m; ++i){
        std::cout << '=';
    }

    for (int i = 0; i < n; ++i){
        std::cout << '|';
    }

}
