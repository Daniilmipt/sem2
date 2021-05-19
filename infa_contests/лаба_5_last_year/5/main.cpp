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
       if (abs(array[j]) > abs(array[j + 1]) && array[j]*array[j + 1] > 0) {
        flag = false;
        std::swap (array[j], array[j + 1]);

        for (int i = 0; i < n; ++i){
           std::cout << array[i] << " ";
            } std::cout << std::endl;
      }
    }
    if (flag) {
      break;
    }
  }



  for (int i = 0; i < n; i++) {
    bool flag = true;
    for (int j = i + 1; j < n; j++) {
       if (abs(array[i]) > abs(array[j]) && array[i]<0 && array[j]<0) {
        flag = false;
        std::swap (array[i], array[j]);

        for (int i = 0; i < n; ++i){
           std::cout << array[i] << " ";
            } std::cout << std::endl;
      }

      if (abs(array[i]) > abs(array[j]) && array[i]>0 && array[j]>0) {
        flag = false;
        std::swap (array[i], array[j]);

        for (int i = 0; i < n; ++i){
           std::cout << array[i] << " ";
            } std::cout << std::endl;
      }

    }
    if (flag) {
      break;
    }
  }



    delete[] array;
}
