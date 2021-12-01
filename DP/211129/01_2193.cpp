#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	long long DP[90];
	DP[0] = 1;
	DP[1] = 1;

	for (int i = 2; i < n; i++)
		DP[i] = DP[i - 1] + DP[i - 2];

	cout << DP[n - 1];
}
