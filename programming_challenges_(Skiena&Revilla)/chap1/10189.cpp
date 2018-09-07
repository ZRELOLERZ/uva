#include <bits/stdc++.h>
#define RR freopen("input.txt", "r", stdin);
#define WW freopen("output.txt", "w", stdout);

using namespace std;

int main() {
	//RR;
	//WW;
	int x, y, field = 1;
	char temp;
	while ( cin >> x >> y) {
		if (x == 0) break;
		if (field > 1) cout << endl;
		cout << "Field #" << field << ":" << endl;	
		char chars[x+2][y+2];
		memset(chars, '0', sizeof(chars));
		for (int i = 1; i < x + 1; i++) {
			for ( int j = 1; j < y + 1; j++) {
				cin >> temp;
				chars[i][j] = temp;
			}
		}
		for (int i = 1; i < x + 1; i++) {
			for (int j = 1; j < y + 1; j++){
				if ( chars[i][j] == '*') cout << '*';
				else{
					int count = 0;
					string pLine = chars[i - 1],
					       cLine = chars[i], 
					       nLine = chars[i+1];
					if ( pLine[j] == '*' ) count++;
					if ( pLine[j-1] == '*' ) count++;
					if ( pLine[j+1] == '*' ) count++;
					if ( cLine[j-1] == '*' ) count++;
					if ( cLine[j+1] == '*' ) count++;
					if ( nLine[j] == '*' ) count++;
					if ( nLine[j-1] == '*' ) count++;
					if ( nLine[j+1] == '*' ) count++;
					cout << count;
				}
			}
			cout << endl;
		}
		field++;
	}
	return 0;
}
