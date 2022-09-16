#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin >> a;
	pair<int, int> p[a];
	for (int i = 0; i < a; i++)
	{
		cin >> p[i].first >> p[i].second;
	}
	int max = INT_MIN;
	int sum = 0;
	for (int i = 0; i < a; i++)
	{
		if (i > 0)
		{
			p[i].second += p[i - 1].second;
			p[i].first += p[i - 1].first;
		}
		if ((p[i].first - p[i].second) >= 0 && (p[i].first - p[i].second) > max)
		{

			sum = p[i].first - p[i].second;

			max = sum;
		}
		else if ((p[i].first - p[i].second) < 0 && abs(p[i].first - p[i].second) > max)
		{

			sum = p[i].first - p[i].second;

			max = abs(p[i].first - p[i].second);
		}
	}
	if (sum < 0)
		cout << 2 << " " << -1 * sum;
	else
		cout << 1 << " " << sum;

	return 0;
}