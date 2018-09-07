#include <bits/stdc++.h>
#define RR freopen("input.txt", "r", stdin);
#define WW freopen("output.txt", "w", stdout);

using namespace std;
int sol(int n) {
	int counter = 1;
	while (n!=1) {
		if (n % 2 == 0) n /= 2;
		else n = 3 * n + 1;
		counter++;
	}
	return counter;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//RR;
	//WW;
	int x, y;
	while(cin >> x >> y) {
		int max = 0, temp = 0, minx = min(x,y), maxy = std::max(x,y);
		for (int i = minx; i <= maxy; i++) {
			temp = sol(i);
			if (temp > max) max = temp;
		}
		cout << x << " " << y << " " << max << endl;
	}
}
