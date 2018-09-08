#include <bits/stdc++.h>

#define RR freopen("input.txt", "r", stdin);
#define WW freopen("output.txt", "w", stdout);
typedef unsigned long long ull;
typedef long double ld;

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ull x, y;
	while(cin >> x >> y) {
		if (x > y) cout << x - y << endl;
		else cout << y - x << endl;
	}
	return 0;
}
