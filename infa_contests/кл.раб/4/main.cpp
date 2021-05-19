#include <iostream>
#include <string>

int main()
{
int symbols[256] = {0};
char x;
 while (std::cin.get(x)) {
            ++symbols[x];
        }
        for (int i = 0; i < 256; ++i){
                std::cout << "'" << (char)i << "': " << i << ": " << symbols[i] << "\n";
        }
}


