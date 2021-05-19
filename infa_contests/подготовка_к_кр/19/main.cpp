#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    int n;
    double Fx = 0;
    double Fy = 0;
    std::cin >> n;
    double *xm = new double[n];
    double *ym = new double[n];
    double *fm = new double[n];

    for (int i = 0; i < n; ++i){
        std::cin >> xm[i] >> ym[i] >> fm[i];
        Fx = Fx + fm[i] * xm[i] / sqrt(xm[i]*xm[i] + ym[i]*ym[i]);
        Fy = Fy + fm[i] * ym[i] / sqrt(xm[i]*xm[i] + ym[i]*ym[i]);
    }

    std::cout << std::fixed << std::setprecision(4) << Fx << ' ' << Fy;

    delete[] xm;
    delete[] ym;
    delete[] fm;
}
