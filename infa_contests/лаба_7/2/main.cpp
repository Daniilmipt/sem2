#include <iostream>


bool prov(int a){
    if ( (a % 4 == 0 && (a / 1000 == 4 || a / 1000 == 5)) || (a % 7 == 0 && (a / 1000 == 7 || a / 1000 == 1)) || (a % 9 == 0 && (a / 1000 == 9 || a / 1000 == 8)) ) return false;
        else {
            if (a % 4 != 0 && a % 7 != 0 && a % 9 != 0 ) return true;
        }
}

int main()
{
    int x,n;
    int k = 0;
    std::cin >> n;
    int *array = new int [n];

    for (int i = 0; i < 1; ++i){
        std::cin >> array[i];
        if (prov(array[i])) {
                std::cout << array[i] << std::endl;
                k = 1;
        }
    }
    if (k == 0) std::cout << 0;

    return 0;
}
