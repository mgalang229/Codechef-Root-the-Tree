#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// create an array 'in' that stores in-degree of all 'n' nodes
		// input the status of each edge (u - 1, v - 1): increment in[v - 1] by 1
		vector<int> in(n, 0);
		for (int i = 0; i < n - 1; i++) {
			int u, v;
			cin >> u >> v;
			--u; --v;
			in[v]++;
		}
		// count the number of nodes with in-degree of 0
		int cnt = count(in.begin(), in.end(), 0);
		cout << cnt - 1 << '\n';
	}
	return 0;
}
