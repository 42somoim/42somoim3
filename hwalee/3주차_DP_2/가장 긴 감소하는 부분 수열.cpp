#include <iostream>
using namespace std;

int check_max(int *arr, int size)
{
	int max = arr[1];
	for (int i = 2 ; i <= n ; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return (max);
}

int main()
{
	int n;
	int arr[1001];
	int DP[1001] = { 1, };

	cin >> n;
	for (int i = 1; i <= n ; i++)
		cin >> arr[i];
	for (int i = 1; i <= n ; i++)
	{
		for (int j = 1; j <= i ; j++)
		{
			if (arr[i] < arr[j])
				if (DP[i] < DP[j] + 1)
					DP[i] = DP[j] + 1;
		}
	}
	printf("%d", check_max(DP, n));
}
