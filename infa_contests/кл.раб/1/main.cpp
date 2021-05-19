#include <iostream>

int main()
{
    //char c; \n
    //while(std::cin.get(c))
        int n;
        char x;
        int k = 0;

        while (std::cin >> x){
            if (x == '(') ++k;
            if (x == ')') --k;
        }

        if (k == 0) std::cout << "Yes";
        else std::cout << "No";
}
