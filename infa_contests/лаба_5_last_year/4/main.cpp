#include <iostream>

int main()
{
    int n;
    int k = 0;
    bool flag = false;
    std::cin >> n;
    int *array = new int[n];

    for (int i = 0; i < n; ++i){
        std::cin >> array[i];
    }

    for (int i = 0; i < n; i++) {
    bool flag = true;
    for (int j = 0; j < n - (i + 1); j++) {
       if (array[j] > array[j + 1]) {
        flag = false;
        std::swap (array[j], array[j + 1]);
      }
    }
    if (flag) {
      break;
    }
  }


    for (int i = 0; i < n; ++i){
           if (array[i] != 0 ) std::cout << array[i] << " ";
    }
    delete[] array;
}
