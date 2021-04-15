#include <iostream>
#include <cmath>

int main() {
    int n;
    int k=1;
    std::cin >> n;
        for (int i = 2; i<n; i++) {
            if (n % i == 0){
                k=0;
            }
        }
   std::cout << k;

}
