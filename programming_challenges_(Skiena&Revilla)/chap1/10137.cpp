#include <bits/stdc++.h>

#define RR freopen("input.txt", "r", stdin);
#define WW freopen("output.txt", "w", stdout);
typedef unsigned long long ull;
typedef long double ld;

using namespace std;

int main() {
	//RR;
	//WW;
	int n;
	while( cin >> n) {
		if (n==0) break;
		double temp, sum = 0, nums[n];
		for ( int i = 0; i < n; i++) {
			cin >> temp;
			nums[i] = temp;
			sum += temp;
		}
		double average = sum / n;
		double posSum = 0, negSum = 0, dif;
		for (int i = 0; i < n; i++){
			dif = (double) (long) ((nums[i] - average)*100.0) / 100.0;
			//printf("%.2f\n",dif);
			dif < 0 ? negSum += dif : posSum += dif;
		}
		negSum = abs(negSum);	
		printf("$%.2lf\n", posSum > negSum ? posSum : negSum);
	}
	return 0;
}
