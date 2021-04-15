#include <iostream>

int fact(int i) {
    if (i==1) return 1;
    else return fact(i-1)*i;
};


int main() {
    int k;
    int n;
    std:: cin >> n;
    k=fact(n);
    std:: cout << k;
    return 0;
}
