#include <iostream>
#include <cmath>


int main()
{
    int n;
    int s = 0;
    int k;
    int s1 = 0;
    std::cin >> n;
    int array[1000];

    for (int i = 0; i < n; i++){
        std::cin >> array[i];
        s += array[i];
    }

    for (int i = 0; i < n; i++){
        if (array[i] > s/n) s1 = s1+ array[i];
    }

    std::cout << s1;
    return 0;
}
