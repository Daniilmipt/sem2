#include <iostream>
#include <bits/stdc++.h>


void sort(fool people, int n, int *mas){

    for (int i = 0; i < n; i++) {
    bool flag = true;
    for (int j = 0; j < n - (i + 1); j++) {
       if ( people[j].value > people[j+1].value ) {
        flag = false;
        std::swap (people[j+1].value, people[j].value);
        std::swap (mas[j+1], mas[j]);
      }
    }
    if (flag) {
      break;
    }
  }
}

struct fool
{
    std::string name;
    int number;
    int value;
};


int main()
{
  int n,x2,x3;
  std::string x1;
  std::cin >> n;
  int *mas = new int[n];
  for (int i = 0; i < n; ++i)
  {
      mas[i] = i;
  }


  for (int i = 0; i < n; ++i){
    fool people[i];
    std::cin >> x1 >> x2 >> x3;
    people[i].name = x1;
    people[i].number = x2;
    people[i].value = x3;
  }

  sort(people, n, mas);


  for (int i = 0; i < n; ++i)
  {
      std::cout << people[i].value << " ";
  }

}
