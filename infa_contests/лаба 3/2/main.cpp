#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int N,M,K,x,y,i;
	cin >> N >> M;
	int *value = new int[(N+2)*(M+2)];

	for(i=0;i<(N+2)*(M+2);i++){
		value[i] = 0;
	}
	cin >> K;

	for(i=0;i<K;i++){
		cin >> x >> y;
		--value[x*(M+2)+y];
	}

	for(i=0;i<(N+2)*(M+2);i++){
		if (value[i] == -1){
			if (value[i-(M+2)-1] != -1){
				++value[i-(M+2)-1];
			}
			if (value[i-(M+2)] != -1){
				++value[i-(M+2)];
			}
			if (value[i-(M+2)+1] != -1){
				++value[i-(M+2)+1];
			}
			if (value[i-1] != -1){
				++value[i-1];
			}
			if (value[i+1] != -1){
				++value[i+1];
			}
			if (value[i+(M+2)-1] != -1){
				++value[i+(M+2)-1];
			}
			if (value[i+(M+2)] != -1){
				++value[i+(M+2)];
			}
			if (value[i+(M+2)+1] != -1){
				++value[i+(M+2)+1];
			}
		}
	}

	for(i=0;i<(N+2)*(M+2);i++){
		if (i/(M+2) != 0 && i/(M+2) != (N+1) && i%(M+2) != 0 && i%(M+2) != M+1){
			cout << value[i] << " ";
			if (i%(M+2) == M ){
				cout << "\n";
			}
		}
		}



	delete[] value;
	return 0;

}
