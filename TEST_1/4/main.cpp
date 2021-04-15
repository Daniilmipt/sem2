#include <iostream>
#include <cmath>

void sort(int *array, int n, int *arr){ //ѕузырЄк

    for (int i = 0; i < n; i++) {
    bool flag = true;
    for (int j = 0; j < n - (i + 1); j++) {
       if (array[j] > array[j + 1]) {
        std::swap (array[j+1], array[j]);
        std::swap (arr[j], arr[j + 1]);
        flag = false;

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
    float min;
    float s = 0;
    std::cin >> n;
    int *masx = new int[n + 1];
    int *masy = new int[n + 1];

    for (int i = 0; i < n; ++i){
        masy[i] = i + 1;
    }

    for (int i = 0; i < n; ++i){
        std::cin >> masx[i];
    }

    sort(masx,n,masy);

    masx[n+1] = masy[1];
    masy[n+1] = masy[0];

    min = masx[1] - masx[0];
    for (int i = 1; i < n; ++i){
        int s = masx[i] - masx[i-1];
        if (s < min) {
            min = s;
            masx[n+1] = masy[i];
            masy[n+1] = masy[i-1];
        }
    }
    std::cout << masx[n+1] << " " << masy[n+1];

    delete[] masx;
    delete[] masy;

}
