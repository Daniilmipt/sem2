#include <iostream>


int main()
{
    int n;
    int k;
    std::cin >> n;
    int **a = new int*[n];
    int **b = new int*[n];
    int **c = new int*[n];

    for (int i = 0; i < n; ++i){
            a[i] = new int [n];
        }

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            std::cin >> a[i][j];
        }
    }


    for (int i = 0; i < n; ++i){
            b[i] = new int [n];
        }

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            std::cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; ++i){
            c[i] = new int [n];
        }

    for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j) {
                c[i][j] = 0;
            }
        }

    for (int i = 0; i < n; ++i){
        k = 0;
    for (int k = 0; k < n; ++k){
        for (int j = 0; j < n; ++j){
            c[i][k] = c[i][k] + a[i][j]*b[j][k];
        }
    }
    }

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            std::cout << c[i][j] << ' ';
        }std::cout << std::endl;
    }

    for (int i = 0; i < n; ++i){
            delete[] a[i];
        }

    for (int i = 0; i < n; ++i){
            delete[] b[i];
        }
    for (int i = 0; i < n; ++i){
            delete[] c[i];
        }
    delete[] a;
    delete[] b;
    delete[] c;
}
