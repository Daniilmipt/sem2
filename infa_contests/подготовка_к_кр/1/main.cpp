#include <iostream>


int main()
{
    int n,m;
    std::cin >> n >> m;
    char **array = new char*[n];
    for (int i = 0; i < n; ++i){
            array[i] = new char [m];
        }

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            array[i][j] =' ';
            if (j == 0 || j == m-1) array[i][j] = '*';
            if (i == 0 || i == n-1) array[i][j] = '*';
        }
        }

        for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            std::cout << array[i][j];
        }std::cout << std::endl;
        }
    delete[] array;
}
