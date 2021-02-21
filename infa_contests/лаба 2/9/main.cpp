#include <iostream>
#include <cmath>
#include <string>

int main() {
    int k;
    int m;
    std::string s;
    int speed;
    std::string number;

    std::getline(std::cin, s);
    while (s.substr( s.find(' ') + 1, s.length() - 1) != 'A999AA' ) {
        m = s.find(' ');
        speed = atoi(s.substr(0,m-1).c_str());
        number = s.substr(m+2,s.length()-3);
        if (speed >= 60) {
        if (number[0] == number[1]) {
            if (number[1] == number[2]) k = 1000;
            else k = 500;
        } else if (number[0] == number[2] or number[1] == number[2]) {
            k = 500;
        } else k = 100;
        }
        std::getline(std::cin, s);

    }
    std::cout << k;
    std::cout << s;




}
