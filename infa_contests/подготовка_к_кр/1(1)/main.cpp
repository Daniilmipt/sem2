#include <iostream>


int main()
{
    int n,m;
    std::cin >> n >> m;
    for (int i = 0; i < n; ++i){
        if (i == 0 || i == n-1){
            for (int j = 0; j < m; ++j) {
                std::cout << '*';
            }
        }
        else {
            std::cout << '*';
            for (int j = 1; j < m-1; ++j) {
                std::cout << ' ';
            }std::cout << '*';
        }std::cout << std::endl;
    }
}
