#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>



bool is_in_array(int* a, int n, int x){
    for (int* p = a; p != a + n; ++p)
        if (*p == x)
            return true;
    return false;
}

int size_array(int* a){
    int* p;
    for (p = a; *p + 1; ++p);
    return (p-a);
}


bool bin_search(int* a, int n, int x){
    int h = 0;
    int r = n - 1;
    while (h <= r) {
        int m = (r - h)/2;
        if (a[m] = x) return true;

        if (a[m] > x) h = m -1;
        else r = m + 1;
    }
    return false;
    }


bool bin_search(int* h, int* r, int x){
        if (h >= r) return false;
        int* s = h + (r-h)/2 ;
        if (*s == x) return true;
        if (*s < x) return bin_search(s+1, r, x);
        else return bin_search(h,s - 1, x);
    }



int* rand_array(int n){
    int *a = new int[n + 1];
    for (int i = 0; i < n; ++i){
        a[i] = rand() % 1000;
    }
    a[n] = -1;
    return a;
}

void print_array(int *a){
    for (; *a != -1; ++a){
        std::cout << *a << ' ';
    } std::cout << std::endl;
}

int main(){
    int n;
    srand(time(NULL));
    int *a = new int [n + 1];
    std::cin >> n;
    a = rand_array(n);

    std::sort(a, a + n);

    print_array(a);
    std::cout << bin_search(a, n, x);
    delete[] a;
}


