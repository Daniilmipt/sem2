#include <iostream>

void zap(int **array, int n){
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            std::cin >> array[i][j];
        }
    }
}

void check(int **array, int n){
    for (int i = 0; i < n; ++i){
        for (int j = n - 1; j >= 0; --j){
            std::cout << array[j][i] << ' ';
        }std::cout << std::endl;
    }
}

int main()
{
    int n;
    std::cin >> n;
    int **array = new int*[n];
        for (int i = 0; i < n; ++i){
            array[i] = new int [n];
        }
    zap(array, n);
    check(array, n);



}
