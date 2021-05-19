#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

struct fool {
    std::string name;
    std::string number;
    long int value;
};

bool mmm (fool x, fool y) {
    if (x.value != y.value) return x.value > y.value;
    else {
        if (x.name != y.name) return x.name < y.name;
        else return x.number < y.number;
    }
}

int main () {

    int i, n;
    std::cin >> n;
    std::vector<fool> tool(n);

    for (i = 0; i < n; ++i)
        std::cin >> tool[i].name >> tool[i].number >> tool[i].value;

    sort(tool.begin(), tool.end(), mmm);

    for (i = 0; i < std::min(n, 10); ++i)
        std::cout << tool[i].name << " " << tool[i].number << " " << tool[i].value << std::endl;
}
