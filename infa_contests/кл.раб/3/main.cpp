#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    if (std::cin >> x){
        main();
    }std::cout << x << ' ';
}
