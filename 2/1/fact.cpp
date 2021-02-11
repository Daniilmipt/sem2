#include <iostream>
#include <cmath>



int fact(int i) {
    if (i==1) return 1; 
    else return i*fact(i-1);    
};


int main() {
    int f;
    int n;
    std:: cin >> n;
    f=fact(n);
    std:: cout << f;
    return 0;
}