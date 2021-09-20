#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, s;
		cin >> n >> s;
		// we can make the numbers before the median equal to zero, after that
		// we have 'm = floor(n / 2) + 1' numbers, which sum should be 'n' and the
		// minimalof them (i.e., median value) should be maximized
		// formula for getting the median position (both odd and even):
		int m = n / 2 + 1;
		// to do so, it is enough to make all these numbers equal to 'floor(s / m)',
		// then add what's left to the last number '(s mod m)'
		cout << s / m << '\n';
	}
	return 0;
}
