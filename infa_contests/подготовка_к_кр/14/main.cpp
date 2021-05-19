#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int *a = new int[n];
    int *b = new int[n/2];
    int *c = new int[n/2];

    for (int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    std::cout << a[n/2] << ' ';

    for (int i = 0; i < n/2; ++i){
        b[i] = a[n/2 - 1 - i];
        c[i] = a[i + n/2 + 1];
    }

    int k = 0;
    int f = 0;
    for (int i = 0; i < n - 1; ++i){
        if (i % 2 == 0) {std::cout << b[k] << ' '; ++k;}
        else {std::cout << c[f] << ' '; ++f;}
    }
    delete[] a;
    delete[] b;
    delete[] c;
}
