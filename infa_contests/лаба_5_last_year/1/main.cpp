#include <iostream>


int main()
{
    int n,k;
    std::cin >> n >> k;
    int *array = new int[n];
    int *s = new int[n];


    for (int i = 0; i < n; ++i){
        std::cin >> array[i];
    }

    for (int i = 0; i < n; ++i){
        if (i <= k) s[ (n-abs((i-k)%n))%n] = array[i];
        if (i > k) s[ i - k ] = array[i];

    }

    for (int i = 0; i < n; ++i){
        std::cout << s[i] << " ";
    }
    delete[] array;
    delete[] s;
}
