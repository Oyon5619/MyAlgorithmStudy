#include<iostream>
using namespace std;
typedef long long ll;
ll n;
ll t[1000005] = { 1,1 };//t[]��ʾ����ǰn*2�������ǽ�ķ�����
ll g[1000005] = { 0,1 };//g[]��ʾ"����ǰ(n+1)*2�������ǽ�����ǵ�(n+1)����һ����ש�Ѿ����̹�"�ķ�����

int main()
{
	cin >> n;
	for (ll i = 2; i <= n; ++i) { //����
		t[i] = (t[i - 1] + t[i - 2] + 2 * g[i - 2])%10000;
		g[i] = (t[i - 1] + g[i - 1])%10000;
	}
	cout << t[n];
	return 0;
}
