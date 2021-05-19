#include <iostream>
#include <iomanip>


int main()
{
    float array[4][3];
    float a1,a2;
    float s;
    for (int i = 0; i < 4; ++i){
             for (int j = 0; j < 3; ++j){
                 std::cin >> array[i][j];
             }
        }

    for (int i = 1; i < 4; ++i){
             for (int j = 0; j < 3; ++j){
                 float b = array[i][j];
                 array[i][j] = b - array[0][j];
             }
        }

    a1 = array[1][0]*array[2][1]*array[3][2]
               + array[1][1]*array[2][2]*array[3][0]
               + array[2][0]*array[3][1]*array[1][2];
    a2 = array[1][2]*array[2][1]*array[3][0]
               +array[1][1]*array[2][0]*array[3][2]
               +array[2][2]*array[3][1]*array[1][0] ;


    if (a1 < a2) std::cout << std::fixed << std::setprecision(4) << (a2-a1)/6;
    else std::cout << std::fixed << std::setprecision(4) << (a1-a2)/6;


}
