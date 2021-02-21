#include <iostream>
#include <cmath>

int main() {
    int n;
    int k=2;
    std::cin >> n;
       while (n > 1){
        if (n % k == 0) {
            std::cout << k << std::endl;
            n = n / k;
        } else k++;


       }

}

