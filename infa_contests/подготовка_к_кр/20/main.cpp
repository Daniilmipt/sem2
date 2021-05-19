#include <iostream>
#include <cmath>

int main()
{
    int n;
    double m;
    double s = 0;
    int k = -1;
    std::cin >> n;
    double *x = new double[n];
    double *y = new double[n];
    double *z = new double[n];

    for (int i = 0; i < n; ++i){
        std::cin >> x[i] >> y[i] >> z[i];
    }
    std::cin >> m;

    for (int i = 1; i < n; ++i){
        s = s + sqrt( (x[i]-x[i-1])*(x[i]-x[i-1]) + (y[i]-y[i-1])*(y[i]-y[i-1]) + (z[i]-z[i-1])*(z[i]-z[i-1]));
        if ( s >= m )
        {
                k = i;
                break;
        }
    }
    std::cout << k;

    delete[] x;
    delete[] y;
    delete[] z;

}
