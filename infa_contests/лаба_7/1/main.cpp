#include <iostream>


int main()
{
    int x,a,b;
    int *array = new int [4];

    for (int i = 0; i < 4; ++i){
        std::cin >> array[i];
    }
    std::cin >> x;
    a = array[1] - array[0];
    b = array[3] / array[2];
    if (x == a && x==b) std::cout << 5;
        else {
            if (x != a && x != b && x == 1024) std::cout << 3;
                else{
                    if (x == a || x == b) std::cout << 4;
                        else std::cout << 2;
                }
        }

    return 0;
    delete[] array;
}
