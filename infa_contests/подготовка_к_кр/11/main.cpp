#include <iostream>

int main()
{
    int n,m;
    int k = 0;
    std::cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    for (int i = 0 ; i < n; ++i){
        std::cin >> a[i] >> b[i];
    }
    std::cin >> m;

    for (int i = 0 ; i < n/2; ++i) {
        k = b[i];
        b[i+1] = k + b[i+1];
        b[i] = 0;
    }

    for (int i = 0 ; i < n ; ++i) {
        if (a[i] + b[i] > m && i!=n-1) {
            b[i+1] = b[i+1] + b[i] + a[i] - m;
            b[i] = b[i] - ( b[i] + a[i] - m);
        }
    }

    for (int i = 0 ; i < n; ++i) {
        std::cout << a[i] << ' ' << b[i] << std::endl;
    }
    delete[] a;
    delete[] b;
}
