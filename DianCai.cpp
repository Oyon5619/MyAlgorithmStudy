//���P1164 
#include<iostream>
using namespace std;
typedef long long ll;
ll n, m, res = 0;
ll v[102] = { 0 };
ll dp[102][10002] = { 0 };
//dp[i][j]:=ǰi�����ù�jԪ�ĸ���
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) cin >> v[i];
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j) {
			//ǰ�������Ҫô��, Ҫô����
			if (j == v[i]) dp[i][j] = dp[i - 1][j] + 1;
			else if (j > v[i]) dp[i][j] = dp[i - 1][j] + dp[i - 1][j - v[i]];
			else dp[i][j] = dp[i - 1][j];//�Բ�����
		}
	printf("%lld", dp[n][m]);
	return 0;
}
