#include <iostream>

int main()
{
    int n;
    int s = 0;
    std::cin >> n;
    int **a = new int*[n];

    for (int i = 0; i < n; ++i){
        a[i] = new int [n];
    }

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            std::cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if ( i + j == n - 1) s = s + a[i][j];
        }
    }
    std::cout << s;

    for (int i = 0; i < n; ++i){
        delete[] a[i];
    }
    delete[] a;
}
