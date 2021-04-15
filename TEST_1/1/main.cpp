#include <iostream>


int main() {
    int s = 1;
    int n;
    std:: cin >> n;
    for (int i = 0; i < n; ++i){
        s = s * (i + 1);
    }
    std::cout << s;
}
