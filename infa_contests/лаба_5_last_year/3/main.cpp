#include <iostream>



int main()
{
    int n;
    std::cin >> n;
    int *array = new int[n];
    int *s = new int[n];

    for (int i = 0; i < n; ++i){
        std::cin >> array[i];
    }

    for (int i = 1; i < n - 1; ++i){
        s[i] =  (array[i-1] + array[i] + array[i+1])/3 ;
    }
    s[0] = (array[n-1] + array[0] + array[1])/3;
    s[n-1] = (array[n-2] + array[n-1] + array[0])/3;

    for (int i = 0; i < n ; ++i){
        std::cout << s[i] << " ";
    }
}
