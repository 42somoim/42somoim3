#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6;
int arr[MAX], t[MAX];

void merge(int s, int mid, int e) {
	int i = s, j = mid;
	int idx = s;
	while (i < mid && j < e) {
		if (arr[i] < arr[j]) t[idx++] = arr[i++];
		else t[idx++] = arr[j++];
	}
	while (i < mid) t[idx++] = arr[i++];
	while (j < e) t[idx++] = arr[j++];

	for (i = s; i < e; i++) arr[i] = t[i];
}

void divide(int s, int e) {
	if (s >= e - 1) return;
	int mid = s + e >> 1;
	divide(s, mid);
	divide(mid, e);
	merge(s, mid, e);
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	divide(0, n);
	for (int i = 0; i < n; i++) cout << arr[i] << '\n';
}
