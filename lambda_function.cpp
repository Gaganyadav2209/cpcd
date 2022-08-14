#include<bits/stdc++.h>

using namespace std;

int main() {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif

	vector<int> v = { 1, 2, 3, 4, 5};


	cout << all_of(v.begin(), v.end(), [](int x) {return x > 0;}) << endl;
	cout << any_of(v.begin(), v.end(), [](int x) {return x > 0;}) << endl;
	cout << none_of(v.begin(), v.end(), [](int x) {return x > 0;}) << endl;

	vector<int> v1 = {2, 4, 6, 8};
	cout << all_of(v1.begin(), v1.end(), [](int x) {return x % 2 == 0;}) << endl;
	cout << any_of(v1.begin(), v1.end(), [](int x) {return x % 2 == 0;}) << endl;
	cout << none_of(v1.begin(), v1.end(), [](int x) {return x % 2 == 0;}) << endl;


	return 0;
}











