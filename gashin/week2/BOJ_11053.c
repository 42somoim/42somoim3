#include <stdio.h>

int max, n, arr[1004], dp[1004], i, j;

int main() {
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
    for(i = 1; i <= n; i++) {
        dp[i] = 1;
        for(j = 1; j < i; j++) {
            if(arr[i] > arr[j] && dp[i] < dp[j] + 1)
                dp[i] = dp[j] + 1;
		}
    }
    for(i = 1; i <= n; i++) {
        if(max < dp[i])
			max = dp[i];
    }
    printf("%d", max);
  return 0;
}