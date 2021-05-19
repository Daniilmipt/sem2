#include <iostream>
#include <stack>
#include <string>

int main()
{
    int a,b,k;
    std::stack <int> s;
    k = 0;

    while (a != 0 or k == 0){
        k = 2;
        std::cin >> a;

        if (a < 0 && s.size() != 0) {
                if (abs(a) < s.top()) {
                a = a + s.top();
                s.pop();
                s.push(a);
                } else if (abs(a) >= s.top()){
                    s.pop();
                }
        } else if (a > 0) s.push(a);
    }

    if (s.size() != 0) b = s.top();
            else b = -1;
    std::cout << s.size() << " " << b << std::endl;
}
