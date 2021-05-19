#include <iostream>


int min(int s, int a){
    if (s < a) return (s);
        else return (a);
}

int main()
{
    int n;
    std::cin >> n;
    int a = n + 1;
    int *array = new int[n];

    for (int i = 0; i < n; ++i){
        std::cin >> array[i];
    }

    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            if (array[i] < 0 && array[i] * array[j] < 0 && abs(array[i]) == abs(array[j]))  a = min(j - i, a);
        }
    }
    if (a == n + 1) std::cout << 0;
        else std::cout << a;
}
