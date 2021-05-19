#include <iostream>
#include <string>

int rang(int x,int i){
    return (x / pow(10,i-1)) % 10;
}

void sort(int *array, int n){
    for (int i = 0; i < n; ++i){
        r = rang(array[i],j);

    }
}


int main()
{
    int i = 1;
    int n;
    int **array = new int*[n];


    std::cin >> array[0];
    while (std::cin.get() != '\n'){
        std::cin >> array[i];
        ++i;
    } n = i;

    sort(array,n);

}
