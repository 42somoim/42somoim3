#include <bits/stdc++.h>
int n, t, arr[10001];

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		arr[t]++;
	}
	for (int i = 1; i <= 10000; i++) {
		if (!arr[i]) continue;
		while (arr[i]) {
			printf("%d\n", i);
			arr[i]--;
		}
	}
}
