#include <iostream>

int main()
{
    int n;
    int k = 0;
    std::cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    for(int i = 0; i < n; i++)
        for(int j = n - 1; j > i; j--)
            if((a[j-1] > 0 && a[j] > 0 && a[j-1] > a[j]) || // Два положительных => сортируем по возрастанию
               (a[j-1] < 0 && a[j] < 0 && a[j-1] < a[j]) || // два отрицательных => по убыванию
               (a[j-1] * a[j] < 0 && a[j-1] < a[j])) // положительное и отрицательное => положительное впереди
            {
                int T = a[j - 1];
                a[j - 1] = a[j];
                a[j] = T;
                for (int i = 0; i < n; ++i){
                     std::cout << a[i] << " ";
                    } std::cout << std::endl;

            }



    delete[] a;
}
