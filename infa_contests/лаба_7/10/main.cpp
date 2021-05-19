#include <iostream>

using namespace std;

int find_root(float a, float b, float tol){
    if (abs(f(b-a)/2) - tol == 0) return (b-a/2);
    if (f((b-a)/2) > 0) {
        find_root(a, (b-a)/2, tol);
    } else (f((b-a)/2) < 0) find_root((b-a)/2, b, tol);
}
