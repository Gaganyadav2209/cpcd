#include<bits/stdc++.h>

using namespace std;

bool should_swap(pair<int, int> a, pair<int, int> b) {

	if (a.first != b.first) {
		if (a.first > b.first)  return false;
		return true;

	}
	else {
		if (a.second < b.second) return false;
		return true;

	}





}

int main() {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif

	int n;
	cin >> n;
	vector< pair<int, int> > v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;

	}



	/*for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {

			if (should_swap(v[i], v[j])) {
				swap(v[i], v[j]);

			}
		}
	}


	*/
	sort(v.begin(), v.end(), should_swap);

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << endl;
	}





	return 0;
}

