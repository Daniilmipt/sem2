#include <iostream>

int main()
{
    int n, f, k;
    std::cin >> n;
    int *x = new int[n];
    int *y = new int[n];

    for (int i = 0; i < n; ++i)
    {
        std::cin >> f >> k;
        x[i] = f;
        y[i] = k;
    }

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if (x[i] + x[j])
        }
    }
}
