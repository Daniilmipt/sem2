#include <iostream>
#include <cmath>

int main(){
	long long N;
	long long value,bal;
	long long X[N+1];
	long long Y[N+1];
	std::cin >> N;
	X[1] = 1;
	Y[1] = 1;
	X[2] = 2;
	Y[2] = 3;

	for (int i = 3; i <= N; ++i){
		X[i] = X[i-1] + Y[i-1];
		Y[i] = 2 * X[i-1] + Y[i-1];
	}
	value = 2 * X[N] + Y[N];
	bal = std::pow(2, 31) - 1;
	std::cout << value % bal;

}
