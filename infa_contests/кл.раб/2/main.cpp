#include <iostream>
#include <stack>
#include <string>

int main()
{
    //char c; \n
    //while(std::cin.get(c))
        int n;
        std::stack <char> st;
        char x;
        int k = 0;
        bool flag = true;
        std::string s = "({[<";
        std::string s1 = ")}]>";


        st.push('<');
        while (std::cin >> x){

            if (s.find(x) >= 0) {
                st.push(x);
                k++;
            }

            if (s1.find(x) >= 0){
                k--;
                if (s1.find(x) != s.find( st.top() )){
                    flag = false;
                } else st.pop();
            }

        }
        if (flag && k == 0) std::cout << "Yes";
        else std::cout << "No";


}
