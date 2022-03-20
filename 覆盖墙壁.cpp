#include<iostream>
using namespace std;
typedef long long ll;
ll n;
ll t[1000005] = { 1,1 };//t[]表示铺满前n*2的面积的墙的方案数
ll g[1000005] = { 0,1 };//g[]表示"铺满前(n+1)*2的面积的墙，但是第(n+1)列有一个瓷砖已经被铺过"的方案数

int main()
{
	cin >> n;
	for (ll i = 2; i <= n; ++i) { //递推
		t[i] = (t[i - 1] + t[i - 2] + 2 * g[i - 2])%10000;
		g[i] = (t[i - 1] + g[i - 1])%10000;
	}
	cout << t[n];
	return 0;
}
