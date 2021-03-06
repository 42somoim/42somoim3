#include <bits/stdc++.h>
#define vp vector<pair<string, vector<int>>>
#define p pair<string, vector<int>>
using namespace std;
int n;
vp v;
bool cmp(p &a, p &b) {
	if (a.second[0] != b.second[0]) return a.second[0] > b.second[0];
	if (a.second[1] != b.second[1]) return a.second[1] < b.second[1];
	if (a.second[2] != b.second[2]) return a.second[2] > b.second[2];
	return a.first < b.first;
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a;
		int b, c, d;
		cin >> a >> b >> c >> d;
		vector<int> t;
		t.push_back(b);
		t.push_back(c);
		t.push_back(d);
		v.push_back({ a, t });
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++) cout << v[i].first << '\n';
}
