#include <iostream>
#include <string>


void sort_1(int *array, int n){

    for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n - (i + 1); ++j) {
      if ( array[j] % 2 != 0 && array[j+1] % 2 == 0) {
            std::swap (array[j], array[j + 1]);
      }

    }
  }
}

void sort_2(int *array, int n){

    for (int i = 0; i < n; i++) {
    bool flag = true;
    for (int j = 0; j < n - (i + 1); j++) {
       if ( array[j] > array[j + 1]) {
        flag = false;
        std::swap (array[j], array[j + 1]);
      }
    }
    if (flag) {
      break;
    }
  }
}


int main()
{
    int i = 1;
    int n;
    int *array = new int[n];
    std::cin >> array[0];
    while (std::cin.get() != '\n'){
        std::cin >> array[i];
        i++;
    } n = i;

    sort_2(array,n);

    for (int i = 0; i < n; ++i){
        std::cout << array[i] << ' ';
    }
}
