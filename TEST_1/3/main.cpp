#include <iostream>


void sort(int *array, int n){ //Сортировка пузырьком

    for (int i = 0; i < n; i++) {
    bool flag = true;
    for (int j = 0; j < n - (i + 1); j++) {
       if ( array[j] > array[j + 1] ) {
        flag = false;
        std::swap (array[j+1], array[j]);
      }
    }
    if (flag) {
      break;
    }
  }
}

int main()
{
    int n;
    std::cin >> n;
    int *mas = new int[n];

    for (int i = 0; i < n; ++i){
        std::cin >> mas[i];
    }
    sort(mas,n);

    for (int i = 0; i < n; ++i){
        if ( n % 2 == 0) {
            if (i == n/2 || i == n/2 - 1){
                std::cout << mas[i] << " ";
            }
        }
        if (n % 2 != 0) {
            if (i == n/2) std::cout << mas[i];
        }
    }
    delete[] mas;
}
